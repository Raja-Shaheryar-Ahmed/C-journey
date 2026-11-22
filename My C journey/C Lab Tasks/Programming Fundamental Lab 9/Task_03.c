#include<stdio.h>
int main(){
	float score[7];
	int i;
	float sum=0.00;
	for(i=0;i<7;i++){
		printf("\nJudge %d score: ",i+1);
		scanf("%f",&score[i]);
		sum+=score[i];
	}
	float max=score[0];
	int judge=0;
	for(i=0;i<7;i++){
		if(score[i]>max){
			max=score[i];
		}
	}
	float min=score[0];
	for(i=0;i<7;i++){
		if(score[i]<min){
			min=score[i];
		}
	}
	printf("\nHighest score dropped: %.2f",max);
	printf("\nLowest score dropped: %.2f",min);
	float final;
	final=(sum-max-min)/5.00;
	printf("\nFinal score: %.2f",final);
	for (int i=0;i<7;i++){
        if(score[i]==10.0){
            judge=i+1; 
            break;               
        }
    }
	if(judge!=0){
		printf("\nJudge %d gave a perfect 10!",judge);
	}else{
		printf("\nNo judge gave a perfect 10");
	}
}