#include<stdio.h>
float toFahrenheit(float c);
float toCelsius(float f);
void printTable(int start, int end, int step);
int main(){
	int start, end, step;
	float F;
	printf("Start: ");
	scanf("%d",&start);
	printf("\nEnd: ");
	scanf("%d",&end);
	printf("\nStep: ");
	scanf("%d",&step);
	printTable(start,end,step);
	printf("\nEnter a temperature in Fahrenheit: ");
	scanf("%f",&F);
	printf("%.2f F = %.2f C",F,toCelsius(F));
	return 0;
}
float toFahrenheit(float c){
	return ((c*9.0/5.0)+32.0);
}
float toCelsius(float f){
	return ((f-32.0)*5.0/9.0);
}
void printTable(int start, int end, int step){
	int i;
	float Fahrenheit;
	printf("\nCelsius\tFahrenheit");
	for(i=start;i<=end;i+=step){
		printf("\n%d\t%.2f",i,toFahrenheit(i));
	}
	return;
}



