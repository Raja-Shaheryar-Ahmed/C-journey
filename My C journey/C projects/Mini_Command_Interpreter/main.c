#include<stdio.h>
#include<string.h>

/*
	Mini Command Interpreter
	------------------------
	A calculator where you TYPE the operation name (add, divide, ...).
	Instead of a long if / else chain, the program keeps the operations in a table:
	    names[i]      -> the text the user types
	    operations[i] -> a FUNCTION POINTER to the function that does the work
	So adding a new command only means writing one function and one table entry.
*/

#define COMMAND_COUNT 5
#define HISTORY_SIZE 5

// A function pointer type: any function that takes two doubles and a pointer
// for the result, and returns 1 (success) or 0 (error), can be stored in it.
typedef int (*Operation)(double a, double b, double *result);

// ---------- Function prototypes ----------
void clearInput(void);
int readNumber(const char prompt[], double *value);
int add(double a, double b, double *result);
int subtract(double a, double b, double *result);
int multiply(double a, double b, double *result);
int divide(double a, double b, double *result);
int power(double a, double b, double *result);
int findCommand(const char text[], const char *names[], const char *aliases[]);
void showHelp(void);
void saveHistory(int op, double a, double b, double result, int ops[], double firsts[], double seconds[], double results[], int *next, int *stored);
void showHistory(const char *names[], int ops[], double firsts[], double seconds[], double results[], int next, int stored);

int main(){
	// The command table, kept in parallel arrays (index 0 = add, 1 = subtract, ...)
	const char *names[COMMAND_COUNT] = {"add", "subtract", "multiply", "divide", "power"};
	const char *aliases[COMMAND_COUNT] = {"+", "-", "*", "/", "^"};
	Operation operations[COMMAND_COUNT] = {add, subtract, multiply, divide, power};

	// History of the last 5 calculations (circular buffer)
	int histOps[HISTORY_SIZE];
	double histFirst[HISTORY_SIZE], histSecond[HISTORY_SIZE], histResult[HISTORY_SIZE];
	int histNext = 0, histStored = 0;

	char command[32];
	double first, second, result;
	int index;

	printf("MINI COMMAND INTERPRETER\n");
	printf("Type help to see the commands.\n");

	while (1){
		printf("\ncommand> ");
		if (scanf("%31s", command) != 1)    // end of input
			break;
		clearInput();

		if (strcmp(command, "exit") == 0 || strcmp(command, "quit") == 0){
			printf("Goodbye!\n");
			break;
		}
		if (strcmp(command, "help") == 0){
			showHelp();
			continue;
		}
		if (strcmp(command, "history") == 0){
			showHistory(names, histOps, histFirst, histSecond, histResult, histNext, histStored);
			continue;
		}

		index = findCommand(command, names, aliases);
		if (index == -1){
			printf("error> Unknown command '%s'. Type help for the list.\n", command);
			continue;
		}

		if (!readNumber("first number> ", &first))
			break;
		if (!readNumber("second number> ", &second))
			break;

		// Call the chosen function THROUGH the pointer stored in the table
		if (operations[index](first, second, &result)){
			printf("result> %.10g\n", result);
			saveHistory(index, first, second, result, histOps, histFirst, histSecond, histResult, &histNext, &histStored);
		}
	}

	return 0;
}

void clearInput(void){
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

// Asks for a number until the user types a valid one. Returns 0 if the input ends.
int readNumber(const char prompt[], double *value){
	int status;

	while (1){
		printf("%s", prompt);
		status = scanf("%lf", value);
		if (status == EOF)
			return 0;
		clearInput();
		if (status == 1)
			return 1;
		printf("error> That is not a number. Try again.\n");
	}
}

// ---------- The operations. All of them have the same shape, so one pointer type fits them all ----------
int add(double a, double b, double *result){
	*result = a + b;
	return 1;
}

int subtract(double a, double b, double *result){
	*result = a - b;
	return 1;
}

int multiply(double a, double b, double *result){
	*result = a * b;
	return 1;
}

int divide(double a, double b, double *result){
	if (b == 0){
		printf("error> Cannot divide by zero.\n");
		return 0;
	}
	*result = a / b;
	return 1;
}

// a to the power b, where b must be a whole number from 0 to 1000
int power(double a, double b, double *result){
	int exponent, i;

	if (b < 0 || b > 1000 || b != (int)b){
		printf("error> The power must be a whole number from 0 to 1000.\n");
		return 0;
	}

	exponent = (int)b;
	*result = 1;
	for (i = 0; i < exponent; i++)
		*result = *result * a;
	return 1;
}

// Looks for the typed text in the names table and then in the aliases table.
// Returns the table index, or -1 if the command does not exist.
int findCommand(const char text[], const char *names[], const char *aliases[]){
	int i;

	for (i = 0; i < COMMAND_COUNT; i++){
		if (strcmp(text, names[i]) == 0 || strcmp(text, aliases[i]) == 0)
			return i;
	}
	return -1;
}

void showHelp(void){
	printf("\nCommands:\n");
	printf("  add (+)        add two numbers\n");
	printf("  subtract (-)   subtract the second number from the first\n");
	printf("  multiply (*)   multiply two numbers\n");
	printf("  divide (/)     divide the first number by the second\n");
	printf("  power (^)      first number to the power of a whole number\n");
	printf("  history        show the last 5 calculations\n");
	printf("  help           show this list\n");
	printf("  exit           close the program\n");
}

// Stores one calculation. When the 5 slots are full the oldest one is overwritten.
void saveHistory(int op, double a, double b, double result, int ops[], double firsts[], double seconds[], double results[], int *next, int *stored){
	ops[*next] = op;
	firsts[*next] = a;
	seconds[*next] = b;
	results[*next] = result;

	*next = (*next + 1) % HISTORY_SIZE;
	if (*stored < HISTORY_SIZE)
		(*stored)++;
}

// Prints the saved calculations, newest first
void showHistory(const char *names[], int ops[], double firsts[], double seconds[], double results[], int next, int stored){
	int i, index;

	if (stored == 0){
		printf("history> No calculations yet.\n");
		return;
	}

	printf("history> (newest first)\n");
	for (i = 0; i < stored; i++){
		index = (next - 1 - i + HISTORY_SIZE) % HISTORY_SIZE;
		printf("  %d. %.10g %s %.10g = %.10g\n", i + 1, firsts[index], names[ops[index]], seconds[index], results[index]);
	}
}
