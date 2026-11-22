#include<stdio.h>
void showBalance(float *balance);
void deposit(float *balance,float amount);
int withdraw(float *balance,float amount);
int main(){
	float balance;
	float amount;
	int choice;
	balance=5000;
	amount=0;
	choice=0;
	do{
		printf("\n---------BANK ACCOUNT---------\n");
		printf("\n1. Balance");
		printf("\n2. Deposite");
		printf("\n3. Withdraw");
		printf("\n4. Exit");
		printf("\nchoice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				showBalance(&balance);
				break;
			case 2:
				printf("Amount: ");
				scanf("%f",&amount);
				deposit(&balance,amount);
				break;
			case 3:
				printf("Amount: ");
				scanf("%f",&amount);
				if(withdraw(&balance,amount)){
					printf("\nWithdraw.");
				}else{
					printf("\nInsufficient balance.");
				}
				break;
			case 4:
				printf("\nGoodbye!");
				break;
			default:
				printf("\nInvalid choice.");
		}
	}while(choice!=4);
	return 0;
}
void showBalance(float *balance){
	printf("Balance: Rs %.2f\n",*balance);
}
void deposit(float *balance,float amount){
	if(amount<=0){
		printf("\nInvalid amount.");
	}else{
		*balance = *balance+amount;
		printf("\nDeposited.");
	}
}
int withdraw(float *balance, float amount){
	if(amount<=0||amount>*balance){
		return 0;
	}
	*balance = *balance-amount;
	return 1;
}

