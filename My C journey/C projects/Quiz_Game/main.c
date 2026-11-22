#include<stdio.h>

/*
	C Quiz Game
	-----------
	8 multiple-choice questions about C basics.
	Text is not stored in arrays (strings are not covered yet), so every
	question is printed by a function that uses a switch statement.
	Two 1D arrays of single characters keep the correct answers and the
	player's answers, and a third array remembers right / wrong per question.
*/

#define TOTAL_QUESTIONS 8

// ---------- Function prototypes ----------
void clearInput(void);
char readAnswer(void);
void showQuestion(int number);
void fillCorrectAnswers(char correct[]);
char getRemarkGrade(int score);
void showRemark(int score);
void showSummary(char correct[], char given[], int right[], int asked);

int main(){
	char correct[TOTAL_QUESTIONS];   // the right answer for each question
	char given[TOTAL_QUESTIONS];     // what the player answered
	int right[TOTAL_QUESTIONS];      // 1 = answered correctly, 0 = wrong
	int i, score = 0, asked = 0;
	char answer;

	fillCorrectAnswers(correct);

	printf("=====================================\n");
	printf("          C PROGRAMMING QUIZ\n");
	printf("=====================================\n");
	printf("Answer each question with a, b, c or d.\n");
	printf("You get 1 mark for every correct answer.\n");

	for (i = 0; i < TOTAL_QUESTIONS; i++){
		printf("\nQuestion %d of %d\n", i + 1, TOTAL_QUESTIONS);
		showQuestion(i + 1);
		printf("Your answer: ");
		answer = readAnswer();

		if (answer == 'q'){          // input ended or player typed q
			printf("\nQuiz stopped early.\n");
			break;
		}

		given[i] = answer;
		asked++;
		if (answer == correct[i]){
			right[i] = 1;
			score++;
			printf("Correct!\n");
		}
		else{
			right[i] = 0;
			printf("Wrong! The correct answer is %c.\n", correct[i]);
		}
	}

	if (asked > 0){
		showSummary(correct, given, right, asked);
		printf("\nFinal score: %d out of %d (%d%%)\n", score, TOTAL_QUESTIONS, score * 100 / TOTAL_QUESTIONS);
		if (asked == TOTAL_QUESTIONS)    // only grade a finished quiz
			showRemark(score);
	}
	return 0;
}

void clearInput(void){
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
		;
}

// Reads one answer. Keeps asking until it is a, b, c or d (any case).
// Returns 'q' if the input ends or the player types q.
char readAnswer(void){
	char ch;

	while (1){
		if (scanf(" %c", &ch) != 1)
			return 'q';
		clearInput();

		if (ch >= 'A' && ch <= 'Z')
			ch = ch - 'A' + 'a';

		if (ch >= 'a' && ch <= 'd')
			return ch;
		if (ch == 'q')
			return 'q';

		printf("Please type a, b, c or d (or q to quit): ");
	}
}

// The correct answers, stored in a 1D array
void fillCorrectAnswers(char correct[]){
	correct[0] = 'b';
	correct[1] = 'c';
	correct[2] = 'b';
	correct[3] = 'd';
	correct[4] = 'a';
	correct[5] = 'b';
	correct[6] = 'c';
	correct[7] = 'b';
}

// Prints one question. A switch picks the right text for the question number.
void showQuestion(int number){
	switch (number){
		case 1:
			printf("Which operator gives the address of a variable?\n");
			printf("  a) *\n  b) &\n  c) #\n  d) @\n");
			break;
		case 2:
			printf("Which loop always runs its body at least once?\n");
			printf("  a) for\n  b) while\n  c) do-while\n  d) switch\n");
			break;
		case 3:
			printf("What is the value of 7 / 2 when both numbers are int?\n");
			printf("  a) 3.5\n  b) 3\n  c) 4\n  d) 2\n");
			break;
		case 4:
			printf("Which header file is needed to use printf()?\n");
			printf("  a) stdlib.h\n  b) math.h\n  c) conio.h\n  d) stdio.h\n");
			break;
		case 5:
			printf("What is the index of the FIRST element of an array?\n");
			printf("  a) 0\n  b) 1\n  c) -1\n  d) It depends on the array\n");
			break;
		case 6:
			printf("Which operator gives the remainder of a division?\n");
			printf("  a) /\n  b) %%\n  c) &\n  d) ^\n");
			break;
		case 7:
			printf("A function that returns nothing uses which return type?\n");
			printf("  a) int\n  b) null\n  c) void\n  d) char\n");
			break;
		case 8:
			printf("If ptr is a pointer, what does *ptr give?\n");
			printf("  a) The address of ptr\n  b) The value stored at the address in ptr\n  c) The size of ptr\n  d) Nothing\n");
			break;
	}
}

// Finds the grade letter for a score: A, B, C or D
char getRemarkGrade(int score){
	if (score >= 7)
		return 'A';
	else if (score >= 5)
		return 'B';
	else if (score >= 3)
		return 'C';
	return 'D';
}

void showRemark(int score){
	switch (getRemarkGrade(score)){
		case 'A':
			printf("Grade A - Excellent! You know your C basics very well.\n");
			break;
		case 'B':
			printf("Grade B - Good job! A little more practice and you will master it.\n");
			break;
		case 'C':
			printf("Grade C - Not bad. Revise loops, functions and pointers.\n");
			break;
		default:
			printf("Grade D - Keep practising! Read the topic READMEs and try again.\n");
	}
}

// Shows a table of every question that was answered
void showSummary(char correct[], char given[], int right[], int asked){
	int i;

	printf("\n--------------- SUMMARY ---------------\n");
	printf("Q.No  Your answer  Correct  Result\n");
	for (i = 0; i < asked; i++){
		printf("%-5d %-12c %-8c ", i + 1, given[i], correct[i]);
		if (right[i] == 1)
			printf("Right\n");
		else
			printf("Wrong\n");
	}
	printf("---------------------------------------\n");
}
