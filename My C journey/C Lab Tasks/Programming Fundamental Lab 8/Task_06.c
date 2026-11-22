#include<stdio.h>
#include<math.h>
int solveQuadratic(double a,double b,double c,double *r1,double *r2);
int main(){
	double a=0,b=0,c=0;
	double r1=0.0,r2=0.0;
	printf("Enter a, b, c : ");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0){
		printf("\ncoefficient a cannot be zero.");
		return 1;
	}
	int roots=solveQuadratic(a,b,c,&r1,&r2);
	if(roots==2){
		printf("\nTwo roots: %.2f and %.2f",r1,r2);
	}else if(roots==1){
		printf("\nOne root: %.2f", r1);
	}else{
		printf("\nNo real roots.");
	}
	return 0;
}
int solveQuadratic(double a,double b,double c,double *r1,double *r2){
	double d=b*b-4*a*c;
	if(d<0){
		return 0;
	}else if(d==0){
		*r1=-b/(2*a);
		*r2=*r1;
		return 1;
	}else{
		*r1=(-b+sqrt(d))/(2*a);
		*r2=(-b-sqrt(d))/(2*a);
		return 2;
	}
}