#include<stdio.h>
int main(){
	float rad = 5.7;
	float pi = 3.14;
	float dia;
	float circum;
	float area;
	dia = 2 * rad;
	circum = 2 * pi * rad;
	area = pi * rad * rad;
	printf("\tCIRCLE GEOMETRY REPORT\n");
	printf("Given radius:\t\t\t%.2f\n",rad);
	printf("Calculated diameter:\t\t%.2f\n",dia);
	printf("Calculated circumference:\t%.2f\n",circum);
	printf("Calculated area:\t\t%.2f\n",area);
	return 0;
}