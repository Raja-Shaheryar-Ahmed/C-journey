#include <stdio.h>

int main() {
    float salary;
    float tax;
    float tax_amount;
    float rem_salary;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    printf("\nEnter the tax rate (%%): ");
    scanf("%f", &tax);

    tax_amount = salary * (tax / 100);
    rem_salary = salary - tax_amount;

    printf("\nTax amount: %.2f", tax_amount);
    printf("\nNet salary after tax: %.2f\n", rem_salary);

    return 0;
}