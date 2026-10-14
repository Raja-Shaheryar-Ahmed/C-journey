#include<stdio.h>
int main(){
	double principal = 250000.00;
	float rate = 8.5;
	int time = 3;
	float simple_interest = (principal * rate * time)/100.00;
	double total_amount = principal + simple_interest;
	float monthly_installment = (total_amount / (time * 12.0));
	printf("\tBANK LOAN INTEREST SUMMARY\n");
	printf("Principal amount:\t%.2f\n",principal);
	printf("Annual interest rate:\t%.2f%%\n",rate);
	printf("Loan duration:\t\t%d\n",time);
	printf("------------------------------\n");
	printf("Total accrued interest:\tPKR %.2f\n",simple_interest);
	printf("Total payable amount:\t%.2f\n",total_amount);
	printf("Monthly installment:\t%.2f",monthly_installment);
	return 0;
}