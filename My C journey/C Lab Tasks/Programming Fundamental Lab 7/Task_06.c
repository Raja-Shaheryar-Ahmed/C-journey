#include <stdio.h>
void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base, int exp);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);
int main(){
	int choice;
	do{
		showMenu();
		printf("\nChoice: ");
		scanf("%d",&choice);
		if(choice==1){
			int base=readNonNegative();
			int exp=readNonNegative();
			printLine(20);
			printf("\n%d ^ %d = %ld",base,exp,power(base,exp));
			printLine(20);
			printf("\n. . . . .\n");
		}else if(choice==2){
		int n=readNonNegative();
		printLine(20);
		printf("%d! = %ld\n",n,factorial(n));
		printLine(20);
        printf("\n. . . .\n");
	}else if(choice==3){
	int n1=readNonNegative();
	int n2=readNonNegative();
	printLine(20);
	printf("\nGCD = %d",gcd(n1,n2));
	printf("\nLCM = %d",lcm(n1,n2));
	printLine(20);
    printf("\n. . . .\n");
	}else if(choice==4){
		printf("\nInvalid choice.");
        printf("\n. . . .\n");
	}
	}while(choice!=4);
	return 0;
}
void showMenu(void){
	printf("\n---MINI MATH TOOKKIT---");
	printf("\n1. Power");
	printf("\n2. Factorial");
	printf("\n3. GCD and LCM");
	printf("\n4. Exit");
}
int readNonNegative(void){
	int value;
	do{
		printf("\nEnter a non negative number: ");
		scanf("%d",&value);
	}while(value<0);
	return value;
}
void printLine(int length){
	int i;
	for(i=0;i<length;i++){
		printf("-");
	}
	printf("\n");
}
long power(int base,int exp){
	long res=1;
	int i;
	for(i=0;i<exp;i++){
		res*=base;
	}
	return res;
}
long factorial(int n){
	long fact=1;
	int i;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int gcd(int a,int b){
	int res=1;
	int minimum;
	if(a<b){
		minimum=a;
	}else{
		minimum=b;
	}
	if(a==0)return b;
	if(b==0)return a;
	int i;
	for(i=1;i<=minimum;i++){
		if(a%i==0&&b%i==0){
			res=i;
		}
	}
	return res;
}
int lcm(int a,int b){
	if(a==0||b==0)return 0;
	return(a*b)/gcd(a,b);
}