#include<stdio.h>

/*
	Tic Tac Toe (2 players)
	-----------------------
	The 3x3 board is stored in a ONE-dimensional array of 9 chars.
	Index layout:      0 | 1 | 2
	                   3 | 4 | 5
	                   6 | 7 | 8
	Players type a cell number 1-9 (index + 1).
	All the game logic lives in functions; main() only controls the rounds.
*/

// ---------- Function prototypes ----------
void clearInput(void);
int readInt(int *value);
char readChar(void);
void resetBoard(char board[]);
void printBoard(char board[]);
int isValidMove(char board[], int cell);
int hasWon(char board[], char player);
int isBoardFull(char board[]);
char switchPlayer(char player);
int playRound(char board[], char firstPlayer);
void updateScore(int result, int *xWins, int *oWins, int *draws);
void showScore(int xWins, int oWins, int draws);

int main(){
	char board[9];
	char again = 'y';
	char starter = 'X';          // who starts the current round
	int xWins = 0, oWins = 0, draws = 0;
	int result;                  // 1 = X wins, 2 = O wins, 0 = draw, -1 = input ended

	printf("=====================================\n");
	printf("          TIC TAC TOE\n");
	printf("=====================================\n");
	printf("Player 1 is X, Player 2 is O.\n");
	printf("Enter the number of the cell (1-9) to place your mark.\n");

	while (again == 'y'){
		resetBoard(board);
		result = playRound(board, starter);

		if (result == -1){
			printf("\nInput ended. Game over.\n");
			return 0;
		}

		updateScore(result, &xWins, &oWins, &draws);
		showScore(xWins, oWins, draws);

		printf("\nPlay again? (y/n): ");
		again = readChar();
		while (again != 'y' && again != 'n'){
			printf("Please type y or n: ");
			again = readChar();
		}
		starter = switchPlayer(starter);   // the other player starts the next round
	}

	printf("\nThanks for playing. Goodbye!\n");
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

// Reads one lower-case letter. Returns 'n' if the input has ended.
char readChar(void){
	char ch;
	if (scanf(" %c", &ch) != 1)
		return 'n';
	clearInput();
	if (ch >= 'A' && ch <= 'Z')
		ch = ch - 'A' + 'a';
	return ch;
}

// Fills the board with the characters '1' to '9'
void resetBoard(char board[]){
	int i;
	for (i = 0; i < 9; i++)
		board[i] = '1' + i;
}

void printBoard(char board[]){
	printf("\n");
	printf(" %c | %c | %c \n", board[0], board[1], board[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[3], board[4], board[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[6], board[7], board[8]);
	printf("\n");
}

// A move is valid if the cell is 1-9 and not already taken
int isValidMove(char board[], int cell){
	if (cell < 1 || cell > 9)
		return 0;
	if (board[cell - 1] == 'X' || board[cell - 1] == 'O')
		return 0;
	return 1;
}

// Checks all 8 winning lines (3 rows, 3 columns, 2 diagonals)
int hasWon(char board[], char player){
	if (board[0] == player && board[1] == player && board[2] == player) return 1;
	if (board[3] == player && board[4] == player && board[5] == player) return 1;
	if (board[6] == player && board[7] == player && board[8] == player) return 1;
	if (board[0] == player && board[3] == player && board[6] == player) return 1;
	if (board[1] == player && board[4] == player && board[7] == player) return 1;
	if (board[2] == player && board[5] == player && board[8] == player) return 1;
	if (board[0] == player && board[4] == player && board[8] == player) return 1;
	if (board[2] == player && board[4] == player && board[6] == player) return 1;
	return 0;
}

// Returns 1 when no free cell is left
int isBoardFull(char board[]){
	int i;
	for (i = 0; i < 9; i++){
		if (board[i] != 'X' && board[i] != 'O')
			return 0;
	}
	return 1;
}

char switchPlayer(char player){
	if (player == 'X')
		return 'O';
	return 'X';
}

// Plays one full round. Returns 1 if X wins, 2 if O wins, 0 for a draw, -1 if input ended
int playRound(char board[], char firstPlayer){
	char player = firstPlayer;
	int cell, status, moveDone;

	while (1){
		printBoard(board);
		moveDone = 0;

		while (!moveDone){
			printf("Player %c, choose a cell (1-9): ", player);
			status = readInt(&cell);

			if (status == -1)
				return -1;
			if (status == 0)
				printf("That is not a number. Try again.\n");
			else if (cell < 1 || cell > 9)
				printf("Cell must be between 1 and 9. Try again.\n");
			else if (!isValidMove(board, cell))
				printf("Cell %d is already taken. Try again.\n", cell);
			else
				moveDone = 1;
		}

		board[cell - 1] = player;

		if (hasWon(board, player)){
			printBoard(board);
			printf("*** Player %c wins this round! ***\n", player);
			if (player == 'X')
				return 1;
			return 2;
		}
		if (isBoardFull(board)){
			printBoard(board);
			printf("*** It's a draw! ***\n");
			return 0;
		}
		player = switchPlayer(player);
	}
}

// Updates the three score counters through pointers
void updateScore(int result, int *xWins, int *oWins, int *draws){
	if (result == 1)
		(*xWins)++;
	else if (result == 2)
		(*oWins)++;
	else
		(*draws)++;
}

void showScore(int xWins, int oWins, int draws){
	printf("\n------------- SCOREBOARD -------------\n");
	printf("Player X wins : %d\n", xWins);
	printf("Player O wins : %d\n", oWins);
	printf("Draws         : %d\n", draws);
	printf("--------------------------------------\n");
}
