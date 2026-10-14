#include<stdio.h>
int main(){
	float weight;
	float height;
	float BMI;
	printf("Enter weight (kg): ");
	scanf("%f",&weight);
	printf("\nEnter height (m): ");
	scanf("%f",&height);
	BMI = weight/(height*height);
	
	printf("\nBMI = %.2f",BMI);
	if(BMI<18.5){
		printf("Category: Underweight\n");
	}
	else if(BMI<25){
		printf("Category: Normal\n");
	}
	else if(BMI<30){
		printf("Category: Overweight\n");
	}
	else{
		printf("Category: Obese\n");
	}
}