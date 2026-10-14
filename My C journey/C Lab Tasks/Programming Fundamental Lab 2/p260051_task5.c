#include<stdio.h>
int main(){
	float temp_in_cel = 25.78;
	float temp_in_fahren;
	float temp_in_kel;
	temp_in_fahren = (temp_in_cel*(9.0/5.0)) + 32;
	temp_in_kel = temp_in_cel + 273.15;
	printf("\tTEMPURATURE CONVERSION\n");
	printf("Temperature in celsius: \t%.2f\n",temp_in_cel);
	printf("Temperature in fahrenheit: \t%.2f\n",temp_in_fahren);
	printf("Temperature in kelvin: \t\t%.2f\n",temp_in_kel);
	return 0;
}