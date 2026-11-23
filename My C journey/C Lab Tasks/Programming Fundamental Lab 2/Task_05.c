#include<stdio.h>
int main(){
	char ch = 'R';
	int integer = 17;
	float value = 356.7645;
	double doublee = 1100.48;
	printf("Type name\tVariable value\tSize in memory\n");
	printf("char\t\t'%c'\t\t%zu byte(s)\n",ch,sizeof(ch));
	printf("int\t\t%d\t\t%zu byte(s)\n",integer,sizeof(integer));
	printf("float\t\t%.4f\t%zu byte(s)\n",value,sizeof(value));
	printf("double\t\t%.2f\t\t%zu byte(s)\n",doublee,sizeof(doublee));
	return 0;
} 
