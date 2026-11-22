#include<stdio.h>

/*
	ATM Banking System
	------------------
	A menu driven ATM simulation.
	- PIN check with 3 attempts
	- Check balance, deposit, withdraw
	- Mini statement of the LAST 5 transactions, stored in 1D arrays
	  used as a circular buffer (the oldest entry is overwritten when full)
	- Balance is passed by reference (pointer) to the functions that change it
*/

// ---------- Function prototypes ----------
void clearInput(void);
int readInt(int *value);
int verifyPin(int correctPin);
void showMenu(void);
void checkBalance(int *balance);
void deposit(int *balance, char types[], int amounts[], int *next, int *count);
void withdraw(int *balance, char types[], int amounts[], int *next, int *count);
void recordTransaction(char types[], int amounts[], int *next, int *count, char type, int amount);
void showStatement(char types[], int amounts[], int next, int count);

int main(){
	int correctPin = 1234;   // the PIN stored by the "bank"
	int balance = 5000;      // starting balance in Rs.
	int choice, status;

	// Circular buffer for the last 5 transactions (parallel 1D arrays)
	char types[5];           // 'D' = deposit, 'W' = withdraw
	int amounts[5];          // amount of each transaction
	int next = 0;            // index where the NEXT transaction will be written
	int count = 0;           // how many transactions are stored (max 5)

	printf("=====================================\n");
	printf("      WELCOME TO THE C-BANK ATM\n");
	printf("=====================================\n");

	if (!verifyPin(correctPin)){
		printf("\nToo many wrong attempts. Card blocked. Goodbye!\n");
		return 0;
	}
	printf("\nPIN accepted.\n");

	do{
		showMenu();
		status = readInt(&choice);

		if (status == -1)        // input ended (Ctrl+D / end of file)
			choice = 5;
		else if (status == 0)    // user typed letters instead of a number
			choice = 0;

		switch (choice){
			case 1:
				checkBalance(&balance);
				break;
			case 2:
				deposit(&balance, types, amounts, &next, &count);
				break;
			case 3:
				withdraw(&balance, types, amounts, &next, &count);
				break;
			case 4:
				showStatement(types, amounts, next, count);
				break;
			case 5:
				printf("\nThank you for using C-Bank ATM. Goodbye!\n");
				break;
			default:
				printf("\nInvalid choice! Please enter a number from 1 to 5.\n");
		}
	} while (choice != 5);

	return 0;
}

// Throws away everything left in the input line so the next scanf starts clean
void clearInput(void){
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

// Reads an integer safely.
// Returns 1 = ok, 0 = invalid (not a number), -1 = end of input
int readInt(int *value){
	int status = scanf("%d", value);
	if (status == EOF)
		return -1;
	clearInput();
	if (status == 0)
		return 0;
	return 1;
}

// Gives the user 3 attempts. Returns 1 if the PIN is right, otherwise 0
int verifyPin(int correctPin){
	int attempt, entered, status;

	for (attempt = 1; attempt <= 3; attempt++){
		printf("Enter your 4-digit PIN (attempt %d of 3): ", attempt);
		status = readInt(&entered);

		if (status == -1)
			return 0;
		if (status == 1 && entered == correctPin)
			return 1;

		printf("Wrong PIN! %d attempt(s) left.\n", 3 - attempt);
	}
	return 0;
}

void showMenu(void){
	printf("\n-------------- MAIN MENU --------------\n");
	printf("1. Check Balance\n");
	printf("2. Deposit\n");
	printf("3. Withdraw\n");
	printf("4. Mini Statement (last 5)\n");
	printf("5. Exit\n");
	printf("---------------------------------------\n");
	printf("Enter your choice: ");
}

void checkBalance(int *balance){
	printf("\nYour current balance is Rs. %d\n", *balance);
}

void deposit(int *balance, char types[], int amounts[], int *next, int *count){
	int amount;

	printf("\nEnter amount to deposit (max Rs. 50000): ");
	if (readInt(&amount) != 1){
		printf("Invalid amount! Please enter digits only.\n");
		return;
	}
	if (amount <= 0){
		printf("Amount must be greater than zero.\n");
		return;
	}
	if (amount > 50000){
		printf("Limit exceeded! You can deposit at most Rs. 50000 at a time.\n");
		return;
	}

	*balance = *balance + amount;   // change the caller's balance through the pointer
	recordTransaction(types, amounts, next, count, 'D', amount);
	printf("Rs. %d deposited successfully. New balance: Rs. %d\n", amount, *balance);
}

void withdraw(int *balance, char types[], int amounts[], int *next, int *count){
	int amount;

	printf("\nEnter amount to withdraw (multiples of 100): ");
	if (readInt(&amount) != 1){
		printf("Invalid amount! Please enter digits only.\n");
		return;
	}
	if (amount <= 0){
		printf("Amount must be greater than zero.\n");
		return;
	}
	if (amount % 100 != 0){
		printf("This ATM only dispenses multiples of Rs. 100.\n");
		return;
	}
	if (amount > *balance){
		printf("Insufficient balance! You only have Rs. %d.\n", *balance);
		return;
	}

	*balance = *balance - amount;
	recordTransaction(types, amounts, next, count, 'W', amount);
	printf("Please take your cash: Rs. %d. New balance: Rs. %d\n", amount, *balance);
}

// Stores one transaction in the circular buffer (size 5).
// When the buffer is full, the oldest entry gets overwritten.
void recordTransaction(char types[], int amounts[], int *next, int *count, char type, int amount){
	types[*next] = type;
	amounts[*next] = amount;

	*next = (*next + 1) % 5;        // wrap around to 0 after index 4
	if (*count < 5)
		(*count)++;
}

// Prints the stored transactions, newest first
void showStatement(char types[], int amounts[], int next, int count){
	int i, index;

	printf("\n------------ MINI STATEMENT ------------\n");
	if (count == 0){
		printf("No transactions yet.\n");
	}
	else{
		printf("No.  Type        Amount (Rs.)\n");
		for (i = 0; i < count; i++){
			index = (next - 1 - i + 5) % 5;   // walk backwards from the newest entry
			printf("%d.   ", i + 1);
			if (types[index] == 'D')
				printf("Deposit     ");
			else
				printf("Withdraw    ");
			printf("%d\n", amounts[index]);
		}
	}
	printf("----------------------------------------\n");
}
