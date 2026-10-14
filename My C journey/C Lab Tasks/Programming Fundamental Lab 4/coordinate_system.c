#include<stdio.h>
int main(){
	float x;
	float y;
	printf("Enter the x-coordinate: ");
    scanf("%f",&x);
    printf("\nEnter the y-coordinate: ");
    scanf("%f",&y);
    
    if(x==0){
    	if(y==0){
    		printf("\nThe point is on origin");
		}
		else{
			printf("\nThe point is on y-axis");
		}
	}
	else{
		if(y==0){
			printf("\nThe point is on x-axis");
		}
		else{
			if(x>0){
				if(y>0){
					printf("The point is in 1st quadrant");
				}
				else{
					printf("The point is in 4th quadrant");
				}
			}
			else{
				if(y>0){
					printf("The point is in 2nd quadrant");
				}
				else{
					printf("The point is in 3rd quadrant");
				}
			}
		}
	}
	return 0;
}