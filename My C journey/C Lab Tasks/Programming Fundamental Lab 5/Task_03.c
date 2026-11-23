#include<stdio.h>
int main(){
	int pin;
	int attempts=3;
	const int correct=4321;
	do{
		printf("Enter PIN: ");
		scanf("%d",&pin);
		attempts--;
		if(pin==correct){
			printf("\nAccess granted");
			break;
		}
		else{
			printf("\nWrong PIN. %d attempt(s) left.\n",attempts);
		}
	}while(attempts>0);
	if(pin!=correct){
		printf("Card blocked. Please contact your bank.\n");
	}
	return 0;
}
