#include<stdio.h>
int main(){
	float price_laptop;
	float current_savings;
	float monthly_savings;
	printf("Enter laptop price: ");
	scanf("%f",&price_laptop);
	printf("\nEnter your current savings: ");
	scanf("%f",&current_savings);
	printf("\nEnter amount you wanna save monthly: ");
	scanf("%f",&monthly_savings);
	printf("\nLaptop price: %.2f",price_laptop);
	printf("\nCurrent savings: %.2f",current_savings);
	printf("\nMonthly savings: %.2f",monthly_savings);
	int months = 0;
	if(monthly_savings<=0&&current_savings<price_laptop){
		printf("\nMonthly savings must be more than 0 to reach the price");
		return 0;
	}
		while(current_savings<price_laptop)
			{
				months++;
      		    current_savings=current_savings+monthly_savings;
                printf("\nMonth %d: savings = %.2f",months,current_savings);
			}
	printf("\nSara can buy laptop after %d month(s): ",months);
	return 0;
}
