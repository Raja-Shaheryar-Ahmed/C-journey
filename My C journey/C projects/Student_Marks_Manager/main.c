#include<stdio.h>

/*
	Student Marks Manager
	---------------------
	Stores up to 30 students in two PARALLEL 1D arrays:
	    rolls[i] and marks[i] belong to the same student.
	Features: add, show all, class statistics, search by roll number,
	          sort by marks (bubble sort), pass / fail count.
	Results are returned from functions through pointers.
*/

#define MAX_STUDENTS 30
#define PASS_MARKS 50

// ---------- Function prototypes ----------
void clearInput(void);
int readInt(int *value);
void showMenu(void);
void addStudent(int rolls[], int marks[], int *count);
void showAll(int rolls[], int marks[], int count);
void classStatistics(int marks[], int count, float *average, int *highest, int *lowest);
void showStatistics(int rolls[], int marks[], int count);
void searchByRoll(int rolls[], int marks[], int count);
void swap(int *a, int *b);
void sortByMarks(int rolls[], int marks[], int count);
void passFailCount(int marks[], int count, int *passed, int *failed);
int findRoll(int rolls[], int count, int roll);
int findRollByMarks(int marks[], int count, int value);

int main(){
	int rolls[MAX_STUDENTS];
	int marks[MAX_STUDENTS];
	int count = 0;
	int choice, status;
	int passed, failed;

	printf("=====================================\n");
	printf("      STUDENT MARKS MANAGER\n");
	printf("=====================================\n");

	do{
		showMenu();
		status = readInt(&choice);

		if (status == -1)          // input ended
			choice = 7;
		else if (status == 0)      // not a number
			choice = 0;

		switch (choice){
			case 1:
				addStudent(rolls, marks, &count);
				break;
			case 2:
				showAll(rolls, marks, count);
				break;
			case 3:
				showStatistics(rolls, marks, count);
				break;
			case 4:
				searchByRoll(rolls, marks, count);
				break;
			case 5:
				if (count == 0){
					printf("\nNo students to sort.\n");
				}
				else{
					sortByMarks(rolls, marks, count);
					printf("\nStudents sorted by marks (highest first).\n");
					showAll(rolls, marks, count);
				}
				break;
			case 6:
				if (count == 0){
					printf("\nNo students added yet.\n");
				}
				else{
					passFailCount(marks, count, &passed, &failed);
					printf("\nPassed (>= %d marks): %d\n", PASS_MARKS, passed);
					printf("Failed (<  %d marks): %d\n", PASS_MARKS, failed);
				}
				break;
			case 7:
				printf("\nGoodbye!\n");
				break;
			default:
				printf("\nInvalid choice! Please enter a number from 1 to 7.\n");
		}
	} while (choice != 7);

	return 0;
}

// Throws away everything left in the input line
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

void showMenu(void){
	printf("\n-------------- MAIN MENU --------------\n");
	printf("1. Add student\n");
	printf("2. Show all students\n");
	printf("3. Class statistics\n");
	printf("4. Search by roll number\n");
	printf("5. Sort by marks\n");
	printf("6. Pass / fail count\n");
	printf("7. Exit\n");
	printf("---------------------------------------\n");
	printf("Enter your choice: ");
}

// Returns the index of the roll number, or -1 if it is not found
int findRoll(int rolls[], int count, int roll){
	int i;
	for (i = 0; i < count; i++){
		if (rolls[i] == roll)
			return i;
	}
	return -1;
}

// Returns the index of the first student who has exactly these marks
int findRollByMarks(int marks[], int count, int value){
	int i;
	for (i = 0; i < count; i++){
		if (marks[i] == value)
			return i;
	}
	return -1;
}

void addStudent(int rolls[], int marks[], int *count){
	int roll, mark;

	if (*count >= MAX_STUDENTS){
		printf("\nThe list is full (%d students). Cannot add more.\n", MAX_STUDENTS);
		return;
	}

	printf("\nEnter roll number (positive): ");
	if (readInt(&roll) != 1 || roll <= 0){
		printf("Invalid roll number!\n");
		return;
	}
	if (findRoll(rolls, *count, roll) != -1){
		printf("Roll number %d already exists!\n", roll);
		return;
	}

	printf("Enter marks (0 to 100): ");
	if (readInt(&mark) != 1 || mark < 0 || mark > 100){
		printf("Invalid marks! They must be between 0 and 100.\n");
		return;
	}

	rolls[*count] = roll;
	marks[*count] = mark;
	(*count)++;
	printf("Student added. Total students: %d\n", *count);
}

void showAll(int rolls[], int marks[], int count){
	int i;

	if (count == 0){
		printf("\nNo students added yet.\n");
		return;
	}

	printf("\nNo.  Roll No.   Marks   Result\n");
	printf("----------------------------------\n");
	for (i = 0; i < count; i++){
		printf("%-4d %-10d %-7d ", i + 1, rolls[i], marks[i]);
		if (marks[i] >= PASS_MARKS)
			printf("Pass\n");
		else
			printf("Fail\n");
	}
}

// Finds the average, highest and lowest marks and gives them back through pointers
void classStatistics(int marks[], int count, float *average, int *highest, int *lowest){
	int i, total = 0;

	*highest = marks[0];
	*lowest = marks[0];
	for (i = 0; i < count; i++){
		total = total + marks[i];
		if (marks[i] > *highest)
			*highest = marks[i];
		if (marks[i] < *lowest)
			*lowest = marks[i];
	}
	*average = (float)total / count;
}

void showStatistics(int rolls[], int marks[], int count){
	float average;
	int highest, lowest;

	if (count == 0){
		printf("\nNo students added yet.\n");
		return;
	}

	classStatistics(marks, count, &average, &highest, &lowest);
	printf("\n------------ CLASS STATISTICS ------------\n");
	printf("Students       : %d\n", count);
	printf("Average marks  : %.2f\n", average);
	printf("Highest marks  : %d (Roll %d)\n", highest, rolls[findRollByMarks(marks, count, highest)]);
	printf("Lowest marks   : %d (Roll %d)\n", lowest, rolls[findRollByMarks(marks, count, lowest)]);
	printf("------------------------------------------\n");
}

void searchByRoll(int rolls[], int marks[], int count){
	int roll, index;

	if (count == 0){
		printf("\nNo students added yet.\n");
		return;
	}

	printf("\nEnter roll number to search: ");
	if (readInt(&roll) != 1){
		printf("Invalid roll number!\n");
		return;
	}

	index = findRoll(rolls, count, roll);
	if (index == -1){
		printf("No student found with roll number %d.\n", roll);
	}
	else{
		printf("Roll %d has %d marks (", roll, marks[index]);
		if (marks[index] >= PASS_MARKS)
			printf("Pass)\n");
		else
			printf("Fail)\n");
	}
}

// Swaps two integers using their addresses
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Bubble sort, highest marks first. Both arrays are swapped together
// so every roll number stays with its own marks.
void sortByMarks(int rolls[], int marks[], int count){
	int i, j;

	for (i = 0; i < count - 1; i++){
		for (j = 0; j < count - 1 - i; j++){
			if (marks[j] < marks[j + 1]){
				swap(&marks[j], &marks[j + 1]);
				swap(&rolls[j], &rolls[j + 1]);
			}
		}
	}
}

void passFailCount(int marks[], int count, int *passed, int *failed){
	int i;

	*passed = 0;
	*failed = 0;
	for (i = 0; i < count; i++){
		if (marks[i] >= PASS_MARKS)
			(*passed)++;
		else
			(*failed)++;
	}
}
