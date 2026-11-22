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
	//We pass a instead of &a because a in this function already contains the address of a in main.
	if(*a>*b){
		swap(a,b);
	}
	if(*a>*c){
		swap(a,c);
	}
	if(*b>*c){
		swap(b,c);
	}
	printf("\nAfter: %d %d %d",*a,*b,*c);
}
