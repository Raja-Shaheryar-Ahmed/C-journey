#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	
	printf("Enter the side a lenght: ");
	scanf("%d",&a);
	printf("\nEnter the side b lenght: ");
	scanf("%d",&b);
	printf("\nEnter the side c lenght: ");
	scanf("%d",&c);
	
	if (a+b>c){
		if (a+c>b){
			if (c+b>a){
				printf("\nIts a valid triangle");
				if (a==b){
					if (b==c){
						printf("\nThe triangle is equilateral triangle");
					}
					else{
						printf("\nThe triangle is isosceles triangle");
					}
				}
				else{
					if (b==c){
						printf("\nThe triangle is isosceles triangle");
					}
					else {
						if (a==c){
							printf("\nThe triangle is isosceles triangle");
						}
						else{
							printf("\nThe triangle is scalene triangle");
						}
					}
				}
			}
			else{
				printf("\nNot a valid triangle...!!");
			}
		}
		else{
			printf("\nNot a valid triangle...!!");
		}	
	}
	else{
		printf("\nNot a valid triangle...!!");
	}

}