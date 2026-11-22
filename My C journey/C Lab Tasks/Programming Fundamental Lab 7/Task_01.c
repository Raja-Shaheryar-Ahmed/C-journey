#include<stdio.h>
void welcome();
void PrintSquare(int side, char ch);
int main(){
	welcome();
	int side;
	char character;
	printf("\nEnter side: ");
	scanf("%d",&side);
	printf("\nEnter character: ");
	scanf(" %c",&character); 
	PrintSquare(side, character);
	welcome();
	return 0;
}
void welcome(){
	printf("\n=====================================");
	printf("\n\tPattern Printer v1.0");
	printf("\n=====================================");
	return;
}
void PrintSquare(int side, char ch){
	int i;
	int j;
	for(i=1;i<=side;i++){
		for(j=1;j<=side;j++){
			printf("%c",ch);
		}
		printf("\n");
	}
	return;
}