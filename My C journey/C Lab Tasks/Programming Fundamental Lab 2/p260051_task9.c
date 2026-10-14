#include<stdio.h>
int main(){
	double basic_salary = 85000;
	double house_rent_allowance;
	float medical_allowance;
	double gross_salary;
	float tax_deduction;
	double net_payable_salary;
	house_rent_allowance = (0.20 * basic_salary);
	medical_allowance = (0.10 * basic_salary);
	gross_salary = basic_salary + house_rent_allowance + medical_allowance;
	tax_deduction = (0.05 * gross_salary);
	net_payable_salary = gross_salary - tax_deduction;
	printf("\tMONTHLY SALARY SLIP\n");
	printf("Basic salary:\t\t\tPKR %.2f\n",basic_salary);
	printf("House rent allowance (20%%):\tPKR %.2f\n",house_rent_allowance);
	printf("Medical allownace (10%%):\tPKR %.2f\n",medical_allowance);
	printf("-------------------------------------------\n");
	printf("Gross salary:\t\t\t%PKR %.2f\n",gross_salary);
	printf("Tax deduction (5%%):\t\tPKR %.2f\n",tax_deduction);
	printf("-------------------------------------------\n");
	printf("Net payable salary:\tPKR %.2f",net_payable_salary);
	return 0;
}