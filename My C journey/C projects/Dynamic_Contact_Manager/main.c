#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
	Dynamic Contact Manager
	-----------------------
	The list of contacts lives in memory that is allocated WHILE the program runs:
	    - malloc  gives the first block of memory
	    - realloc makes the block bigger when it becomes full (capacity doubles)
	    - free    gives the memory back before the program ends

	Structs are not covered yet, so every contact is stored as one fixed-size
	"record" of characters inside ONE big block:

	    | name (50 chars) | phone (20 chars) | email (60 chars) |   <- record 0
	    | name (50 chars) | phone (20 chars) | email (60 chars) |   <- record 1
	    ...

	Record number i starts at   contacts + i * RECORD_SIZE
	count    = how many contacts are really stored
	capacity = how many contacts the block has room for
*/

#define NAME_LEN 50
#define PHONE_LEN 20
#define EMAIL_LEN 60
#define RECORD_SIZE (NAME_LEN + PHONE_LEN + EMAIL_LEN)

// ---------- Function prototypes ----------
void clearInput(void);
int readInt(int *value);
int readLine(char text[], int size);
char *getName(char *contacts, int index);
char *getPhone(char *contacts, int index);
char *getEmail(char *contacts, int index);
int isValidPhone(const char phone[]);
int isValidEmail(const char email[]);
int ensureCapacity(char **contacts, int *capacity, int count);
int findContactByName(char *contacts, int count, const char name[]);
void showMenu(int count, int capacity);
void addContact(char **contacts, int *count, int *capacity);
void displayContacts(char *contacts, int count);
void searchContact(char *contacts, int count);
void updateContact(char *contacts, int count);
void deleteContact(char *contacts, int *count);
void freeContacts(char **contacts, int *count, int *capacity);

int main(){
	char *contacts = NULL;    // no memory yet
	int count = 0;
	int capacity = 0;
	int choice, status;

	do{
		showMenu(count, capacity);
		status = readInt(&choice);

		if (status == -1)          // input ended
			choice = 0;
		else if (status == 0)      // not a number
			choice = -1;

		switch (choice){
			case 1:
				addContact(&contacts, &count, &capacity);
				break;
			case 2:
				displayContacts(contacts, count);
				break;
			case 3:
				searchContact(contacts, count);
				break;
			case 4:
				updateContact(contacts, count);
				break;
			case 5:
				deleteContact(contacts, &count);
				break;
			case 0:
				printf("\nGoodbye!\n");
				break;
			default:
				printf("\nInvalid choice! Please enter a number from 0 to 5.\n");
		}
	} while (choice != 0);

	freeContacts(&contacts, &count, &capacity);   // always give the memory back
	return 0;
}

void clearInput(void){
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

// Returns 1 = ok, 0 = not a number, -1 = end of input
int readInt(int *value){
	int status = scanf("%d", value);
	if (status == EOF)
		return -1;
	clearInput();
	if (status == 0)
		return 0;
	return 1;
}

// Reads a whole line (spaces allowed). Returns 1 = ok, 0 = end of input, 2 = line was too long
int readLine(char text[], int size){
	int length;

	if (fgets(text, size, stdin) == NULL)
		return 0;

	length = (int)strlen(text);
	if (length > 0 && text[length - 1] == '\n'){
		text[length - 1] = '\0';
		return 1;
	}
	clearInput();      // the line did not fit, so throw the rest away
	return 2;
}

// ---------- Access to the three parts of record number "index" ----------
char *getName(char *contacts, int index){
	return contacts + index * RECORD_SIZE;
}

char *getPhone(char *contacts, int index){
	return contacts + index * RECORD_SIZE + NAME_LEN;
}

char *getEmail(char *contacts, int index){
	return contacts + index * RECORD_SIZE + NAME_LEN + PHONE_LEN;
}

// A phone number is an optional leading + followed by at least 7 digits
int isValidPhone(const char phone[]){
	int i = 0, digits = 0;

	if (phone[0] == '+')
		i = 1;
	for (; phone[i] != '\0'; i++){
		if (phone[i] < '0' || phone[i] > '9')
			return 0;
		digits++;
	}
	return digits >= 7;
}

// A simple email check: text@text.text with no spaces
int isValidEmail(const char email[]){
	const char *at;
	const char *dot;
	int i;

	for (i = 0; email[i] != '\0'; i++){
		if (email[i] == ' ')
			return 0;
	}

	at = strchr(email, '@');
	if (at == NULL || at == email)         // no @, or @ is the first character
		return 0;
	if (strchr(at + 1, '@') != NULL)       // a second @
		return 0;

	dot = strchr(at + 1, '.');
	if (dot == NULL || dot == at + 1 || dot[1] == '\0')
		return 0;
	return 1;
}

// Makes sure there is room for one more contact.
// First time: malloc. After that: when count reaches capacity, realloc doubles the space.
// Returns 1 if there is room, 0 if the computer could not give more memory.
int ensureCapacity(char **contacts, int *capacity, int count){
	int newCapacity;
	char *temp;

	if (count < *capacity)
		return 1;                                  // there is still room

	newCapacity = (*capacity == 0) ? 4 : *capacity * 2;

	if (*contacts == NULL)
		temp = malloc((size_t)newCapacity * RECORD_SIZE);
	else
		temp = realloc(*contacts, (size_t)newCapacity * RECORD_SIZE);

	if (temp == NULL){
		// If realloc fails the OLD block is still valid, so we keep using it
		printf("error> Could not allocate more memory.\n");
		return 0;
	}

	*contacts = temp;               // only now is it safe to use the new block
	*capacity = newCapacity;
	return 1;
}

// Returns the index of the contact with exactly this name, or -1
int findContactByName(char *contacts, int count, const char name[]){
	int i;
	for (i = 0; i < count; i++){
		if (strcmp(getName(contacts, i), name) == 0)
			return i;
	}
	return -1;
}

void showMenu(int count, int capacity){
	printf("\n===== CONTACT MANAGER =====\n");
	printf("1. Add Contact\n");
	printf("2. View Contacts\n");
	printf("3. Search Contact\n");
	printf("4. Update Contact\n");
	printf("5. Delete Contact\n");
	printf("0. Exit\n");
	printf("\nTotal Contacts: %d\n", count);
	printf("Allocated Capacity: %d\n", capacity);
	printf("Enter choice: ");
}

void addContact(char **contacts, int *count, int *capacity){
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char email[EMAIL_LEN];
	int status;

	printf("\nEnter name: ");
	status = readLine(name, NAME_LEN);
	if (status == 0 || name[0] == '\0'){
		printf("The name cannot be empty!\n");
		return;
	}
	if (status == 2){
		printf("The name is too long (maximum %d characters).\n", NAME_LEN - 1);
		return;
	}
	if (findContactByName(*contacts, *count, name) != -1){
		printf("A contact named %s already exists!\n", name);
		return;
	}

	printf("Enter phone (digits only, optional + at the start): ");
	status = readLine(phone, PHONE_LEN);
	if (status != 1 || !isValidPhone(phone)){
		printf("Invalid phone number! Use at least 7 digits.\n");
		return;
	}

	printf("Enter email: ");
	status = readLine(email, EMAIL_LEN);
	if (status != 1 || !isValidEmail(email)){
		printf("Invalid email! Example: name@example.com\n");
		return;
	}

	// All input is valid. Make room first, then store the contact.
	if (!ensureCapacity(contacts, capacity, *count))
		return;

	strcpy(getName(*contacts, *count), name);
	strcpy(getPhone(*contacts, *count), phone);
	strcpy(getEmail(*contacts, *count), email);
	(*count)++;                      // count only grows after a successful insert
	printf("Contact added.\n");
}

void displayContacts(char *contacts, int count){
	int i;

	if (count == 0){
		printf("\nNo contacts saved yet.\n");
		return;
	}

	printf("\n%-4s %-20s %-16s %s\n", "No.", "NAME", "PHONE", "EMAIL");
	for (i = 0; i < count; i++)
		printf("%-4d %-20s %-16s %s\n", i + 1, getName(contacts, i), getPhone(contacts, i), getEmail(contacts, i));
}

// Shows every contact whose name CONTAINS the typed text (capital letters matter)
void searchContact(char *contacts, int count){
	char query[NAME_LEN];
	int i, found = 0;

	if (count == 0){
		printf("\nNo contacts saved yet.\n");
		return;
	}

	printf("\nEnter name (or part of it) to search: ");
	if (readLine(query, NAME_LEN) != 1 || query[0] == '\0'){
		printf("Please type something to search for.\n");
		return;
	}

	for (i = 0; i < count; i++){
		if (strstr(getName(contacts, i), query) != NULL){
			printf("%s | %s | %s\n", getName(contacts, i), getPhone(contacts, i), getEmail(contacts, i));
			found++;
		}
	}
	if (found == 0)
		printf("No contact found for '%s'.\n", query);
}

// Press Enter on a question to keep the old value
void updateContact(char *contacts, int count){
	char name[NAME_LEN];
	char phone[PHONE_LEN];
	char email[EMAIL_LEN];
	int index, status;

	if (count == 0){
		printf("\nNo contacts saved yet.\n");
		return;
	}

	printf("\nEnter the exact name of the contact to update: ");
	if (readLine(name, NAME_LEN) != 1){
		printf("Invalid name!\n");
		return;
	}
	index = findContactByName(contacts, count, name);
	if (index == -1){
		printf("No contact named '%s'.\n", name);
		return;
	}

	printf("Current phone: %s\n", getPhone(contacts, index));
	printf("New phone (press Enter to keep it): ");
	status = readLine(phone, PHONE_LEN);
	if (status != 1){
		printf("Invalid phone number!\n");
		return;
	}
	if (phone[0] != '\0' && !isValidPhone(phone)){
		printf("Invalid phone number! Nothing was changed.\n");
		return;
	}

	printf("Current email: %s\n", getEmail(contacts, index));
	printf("New email (press Enter to keep it): ");
	status = readLine(email, EMAIL_LEN);
	if (status != 1){
		printf("Invalid email!\n");
		return;
	}
	if (email[0] != '\0' && !isValidEmail(email)){
		printf("Invalid email! Nothing was changed.\n");
		return;
	}

	// Both answers are fine, so now it is safe to change the record
	if (phone[0] != '\0')
		strcpy(getPhone(contacts, index), phone);
	if (email[0] != '\0')
		strcpy(getEmail(contacts, index), email);
	printf("Contact updated.\n");
}

// Removes a contact by moving all later records one place to the left
void deleteContact(char *contacts, int *count){
	char name[NAME_LEN];
	int index;

	if (*count == 0){
		printf("\nNo contacts saved yet.\n");
		return;
	}

	printf("\nEnter the exact name of the contact to delete: ");
	if (readLine(name, NAME_LEN) != 1){
		printf("Invalid name!\n");
		return;
	}
	index = findContactByName(contacts, *count, name);
	if (index == -1){
		printf("No contact named '%s'.\n", name);
		return;
	}

	// memmove copies a block of memory, even when the source and target overlap
	memmove(getName(contacts, index), getName(contacts, index + 1), (size_t)(*count - index - 1) * RECORD_SIZE);
	(*count)--;
	printf("Contact deleted.\n");
}

// Gives the memory back and resets everything to the "nothing allocated" state
void freeContacts(char **contacts, int *count, int *capacity){
	free(*contacts);
	*contacts = NULL;
	*count = 0;
	*capacity = 0;
}
