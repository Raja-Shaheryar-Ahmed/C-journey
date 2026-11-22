#include<stdio.h>
void circleInfo(float radius,float *area,float *circumference);
int main(){
	float radius,area,circumference;
	do{
		printf("\nEnter radius: ");
		scanf("%f",&radius);
		if(radius<0){
			printf("\nRadius cannot be negative.");
		}
	}while(radius<0);
	circleInfo(radius,&area,&circumference);
	printf("\nArea: %.2f",area);
	printf("\nCircumference: %.2f",circumference);
	return 0;
}
void circleInfo(float radius,float *area,float *circumference){
	*area=((3.14159)*(radius)*(radius));
	*circumference=(2*(3.14159)*(radius));
	return;
}
