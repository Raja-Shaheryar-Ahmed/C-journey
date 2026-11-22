#include<stdio.h>
#include<string.h>

/*
	Inventory Management System
	---------------------------
	A small shop inventory kept in PARALLEL arrays:
	    ids[i], names[i], quantities[i] and prices[i] all describe product number i.
	Features: add, display, search, update stock, delete, total value, low-stock warning.
*/

#define MAX_PRODUCTS 100
#define NAME_LENGTH 50

// ---------- Function prototypes ----------
void clearInput(void);
int readInt(int *value);
int readFloat(float *value);
int readLine(char text[], int size);
void showMenu(void);
int findProductById(int ids[], int count, int id);
void addProduct(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int *count);
void displayProducts(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int count, int lowLimit);
void searchProduct(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int count);
void updateStock(int ids[], char names[][NAME_LENGTH], int quantities[], int count);
void deleteProduct(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int *count);
double calculateInventoryValue(int quantities[], float prices[], int count);
void showLowStock(char names[][NAME_LENGTH], int quantities[], int count, int lowLimit);
void setLowStockLimit(int *lowLimit);

int main(){
	int ids[MAX_PRODUCTS];
	char names[MAX_PRODUCTS][NAME_LENGTH];
	int quantities[MAX_PRODUCTS];
	float prices[MAX_PRODUCTS];
	int count = 0;
	int lowLimit = 5;          // a product is "low" when its quantity is below this number
	int choice, status;

	do{
		showMenu();
		status = readInt(&choice);

		if (status == -1)          // input ended
			choice = 0;
		else if (status == 0)      // not a number
			choice = -1;

		switch (choice){
			case 1:
				addProduct(ids, names, quantities, prices, &count);
				break;
			case 2:
				displayProducts(ids, names, quantities, prices, count, lowLimit);
				break;
			case 3:
				searchProduct(ids, names, quantities, prices, count);
				break;
			case 4:
				updateStock(ids, names, quantities, count);
				break;
			case 5:
				deleteProduct(ids, names, quantities, prices, &count);
				break;
			case 6:
				printf("\nTotal inventory value: %.2f\n", calculateInventoryValue(quantities, prices, count));
				break;
			case 7:
				showLowStock(names, quantities, count, lowLimit);
				break;
			case 8:
				setLowStockLimit(&lowLimit);
				break;
			case 0:
				printf("\nGoodbye!\n");
				break;
			default:
				printf("\nInvalid choice! Please enter a number from 0 to 8.\n");
		}
	} while (choice != 0);

	return 0;
}

// Throws away the rest of the current input line
void clearInput(void){
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

// Reads an int. Returns 1 = ok, 0 = not a number, -1 = end of input
int readInt(int *value){
	int status = scanf("%d", value);
	if (status == EOF)
		return -1;
	clearInput();
	if (status == 0)
		return 0;
	return 1;
}

// Reads a float. Returns 1 = ok, 0 = not a number, -1 = end of input
int readFloat(float *value){
	int status = scanf("%f", value);
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

void showMenu(void){
	printf("\n========== INVENTORY MANAGEMENT ==========\n");
	printf("1. Add product\n");
	printf("2. Display all products\n");
	printf("3. Search product by ID\n");
	printf("4. Update stock (received / sold)\n");
	printf("5. Delete product\n");
	printf("6. Total inventory value\n");
	printf("7. Show low-stock products\n");
	printf("8. Change low-stock limit\n");
	printf("0. Exit\n");
	printf("==========================================\n");
	printf("Enter choice: ");
}

// Returns the index of the product with this ID, or -1 if it does not exist
int findProductById(int ids[], int count, int id){
	int i;
	for (i = 0; i < count; i++){
		if (ids[i] == id)
			return i;
	}
	return -1;
}

void addProduct(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int *count){
	int id, quantity, status;
	float price;
	char name[NAME_LENGTH];

	if (*count >= MAX_PRODUCTS){
		printf("\nThe inventory is full (%d products).\n", MAX_PRODUCTS);
		return;
	}

	printf("\nEnter product ID (positive number): ");
	if (readInt(&id) != 1 || id <= 0){
		printf("Invalid ID!\n");
		return;
	}
	if (findProductById(ids, *count, id) != -1){
		printf("A product with ID %d already exists!\n", id);
		return;
	}

	printf("Enter product name: ");
	status = readLine(name, NAME_LENGTH);
	if (status == 0 || name[0] == '\0'){
		printf("The name cannot be empty!\n");
		return;
	}
	if (status == 2){
		printf("The name is too long (maximum %d characters).\n", NAME_LENGTH - 1);
		return;
	}

	printf("Enter quantity: ");
	if (readInt(&quantity) != 1 || quantity < 0){
		printf("Invalid quantity! It must be 0 or more.\n");
		return;
	}

	printf("Enter unit price: ");
	if (readFloat(&price) != 1 || price <= 0){
		printf("Invalid price! It must be greater than 0.\n");
		return;
	}

	// Everything is valid, so store the product at the next free position
	ids[*count] = id;
	strcpy(names[*count], name);
	quantities[*count] = quantity;
	prices[*count] = price;
	(*count)++;
	printf("Product added. Products in inventory: %d\n", *count);
}

void displayProducts(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int count, int lowLimit){
	int i;

	if (count == 0){
		printf("\nThe inventory is empty.\n");
		return;
	}

	printf("\n===== INVENTORY =====\n");
	printf("%-6s %-20s %6s %10s  %s\n", "ID", "PRODUCT", "QTY", "PRICE", "STATUS");
	for (i = 0; i < count; i++){
		printf("%-6d %-20s %6d %10.2f  ", ids[i], names[i], quantities[i], prices[i]);
		if (quantities[i] < lowLimit)
			printf("LOW\n");
		else
			printf("OK\n");
	}
}

void searchProduct(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int count){
	int id, index;

	printf("\nEnter product ID to search: ");
	if (readInt(&id) != 1){
		printf("Invalid ID!\n");
		return;
	}

	index = findProductById(ids, count, id);
	if (index == -1){
		printf("No product found with ID %d.\n", id);
		return;
	}

	printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n", ids[index], names[index], quantities[index], prices[index]);
}

// A positive change means stock received, a negative change means stock sold
void updateStock(int ids[], char names[][NAME_LENGTH], int quantities[], int count){
	int id, index, change, newQuantity;

	printf("\nEnter product ID: ");
	if (readInt(&id) != 1){
		printf("Invalid ID!\n");
		return;
	}

	index = findProductById(ids, count, id);
	if (index == -1){
		printf("No product found with ID %d.\n", id);
		return;
	}

	printf("%s currently has %d in stock.\n", names[index], quantities[index]);
	printf("Enter change (positive = received, negative = sold): ");
	if (readInt(&change) != 1 || change == 0){
		printf("Invalid change!\n");
		return;
	}
	if (change > 100000 || change < -100000){
		printf("That change is too large!\n");
		return;
	}

	newQuantity = quantities[index] + change;
	if (newQuantity < 0){
		printf("Not enough stock! You only have %d.\n", quantities[index]);
		return;
	}

	quantities[index] = newQuantity;
	printf("Stock updated. %s now has %d in stock.\n", names[index], quantities[index]);
}

// Removes a product by moving every later product one place to the left
void deleteProduct(int ids[], char names[][NAME_LENGTH], int quantities[], float prices[], int *count){
	int id, index, i;

	if (*count == 0){
		printf("\nThe inventory is empty.\n");
		return;
	}

	printf("\nEnter product ID to delete: ");
	if (readInt(&id) != 1){
		printf("Invalid ID!\n");
		return;
	}

	index = findProductById(ids, *count, id);
	if (index == -1){
		printf("No product found with ID %d.\n", id);
		return;
	}

	for (i = index; i < *count - 1; i++){
		ids[i] = ids[i + 1];
		strcpy(names[i], names[i + 1]);
		quantities[i] = quantities[i + 1];
		prices[i] = prices[i + 1];
	}
	(*count)--;
	printf("Product %d deleted. Products left: %d\n", id, *count);
}

// Adds up quantity x price for every product
double calculateInventoryValue(int quantities[], float prices[], int count){
	int i;
	double total = 0;

	for (i = 0; i < count; i++)
		total = total + quantities[i] * (double)prices[i];
	return total;
}

void showLowStock(char names[][NAME_LENGTH], int quantities[], int count, int lowLimit){
	int i, found = 0;

	printf("\nProducts with stock below %d:\n", lowLimit);
	for (i = 0; i < count; i++){
		if (quantities[i] < lowLimit){
			printf("Warning: %s stock is low! (%d left)\n", names[i], quantities[i]);
			found = 1;
		}
	}
	if (!found)
		printf("None. All products have enough stock.\n");
}

// Changes the limit through a pointer so main() sees the new value
void setLowStockLimit(int *lowLimit){
	int newLimit;

	printf("\nCurrent low-stock limit is %d.\n", *lowLimit);
	printf("Enter the new limit (1 to 1000): ");
	if (readInt(&newLimit) != 1 || newLimit < 1 || newLimit > 1000){
		printf("Invalid limit!\n");
		return;
	}
	*lowLimit = newLimit;
	printf("Low-stock limit is now %d.\n", *lowLimit);
}
