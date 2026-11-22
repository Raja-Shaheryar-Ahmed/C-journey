#include<stdio.h>
#include<math.h>
int main(){
	double a,b;
	double hyp;
	double area;
	printf("Enter side a: ");
	scanf("%lf",&a);
	printf("\nEnter side b: ");
	scanf("%lf",&b);
	hyp=sqrt(pow(a,2)+pow(b,2));
	// on line 11, pow and sqrt comes from math.h library
	area=0.5*a*b;
	
	printf("\nHypotenuse: %.2f",hyp);
	printf("\nRounded up: %.0f",ceil(hyp));
	printf("\nRounded down: %.0f",floor(hyp));
	// on line 16 and 17, ceil and floor comes from math.h library
	printf("\nArea: %.2f",area);
	return 0;
}