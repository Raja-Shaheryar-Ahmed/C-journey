#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("\nThe largest is %d",a);
		}
	}
	if(b>a){
		if(b>c){
			printf("\nThe largest is %d",b);
		}
	}
	if(c>b){
		if(c>b){
			printf("\nThe largest is %d",c);
		}
	}
	return 0;
}