#include<stdio.h>
int main(){
	int weight;
	printf("Enter the weight (kg) : ");
	scanf("%d",&weight);
	if (weight%2==0){
		if(weight>=4){
			printf("\nYES");
		}
		else{
			printf("\nNO");
		}
	}
	else{
		printf("\nNO");
	}
	return 0;
}