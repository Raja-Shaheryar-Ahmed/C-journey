#include<stdio.h>
int readUnits(void);
float calculateBill(int units);
int main(){
	int units;
	units=readUnits();
	printf("\nTotal bill: %.2f",calculateBill(units));
	return 0;
}
int readUnits(void){
	int units;
	do{
		printf("\nEnter units consumed: ");
		scanf("%d",&units);
		if(units<0){
			printf("\nUnits cannot be negative.");
		}
	}while(units<0);
	printf("\nUnits consumed: %d",units);
	return units;
}
float calculateBill(int units){
	float totalBill=0;
	int i;
	while(units>300){
		totalBill+=20;
		units--;
	}
	while(units>100){
		totalBill+=15;
		units--;
	}
	while(units>0){
		totalBill+=10;
		units--;
	}
	if(totalBill>3000){
		totalBill=totalBill+(totalBill*0.05);
	}
	return totalBill;
}




