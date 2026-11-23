#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	
	printf("Enter the side a length: ");
	scanf("%d",&a);
	printf("\nEnter the side b length: ");
	scanf("%d",&b);
	printf("\nEnter the side c length: ");
	scanf("%d",&c);
	
	if (a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a){
		printf("\nNot a valid triangle...!!");
	}
	else{
		printf("\nIts a valid triangle");
		if (a==b&&b==c){
			printf("\nThe triangle is equilateral triangle");
		}
		else if (a==b||b==c||a==c){
			printf("\nThe triangle is isosceles triangle");
		}
		else{
			printf("\nThe triangle is scalene triangle");
		}
	}
	return 0;
}
