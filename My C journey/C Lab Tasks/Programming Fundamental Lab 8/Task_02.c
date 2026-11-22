#include<stdio.h>
void swap(int *x, int *y);
void sortThree(int *a, int *b, int *c);
int main(){
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	sortThree(&a,&b,&c);
	return 0;
}
void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
	
}
void sortThree(int *a, int *b, int *c){  
	printf("\nBefore: %d %d %d",*a,*b,*c);
	if(*a>*b){  //We passes a instead of &a because the *a in this funtion already contain the address of a which is in main.
		swap(a,b);
			if(*a>*c){
				swap(a,c);
			}
	}
	printf("\nAfter: %d %d %d",*a,*b,*c);
}
