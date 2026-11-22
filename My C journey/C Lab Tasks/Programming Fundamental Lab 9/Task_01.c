#include<stdio.h>
int main(){
	int runs[6];
	int total_runs=0,i;
	int best=0;
	float run_rate;
	for(i=0;i<6;i++){
		printf("\nRun in over %d: ",i+1);
		scanf("%d",&runs[i]);
		total_runs += runs[i];
	}
	for(i=0;i<6;i++){
		if(runs[i]>runs[best]){
			best=i;
		}
	}
	run_rate=total_runs/6.0;
	printf("\nTotal runs: %d",total_runs);
	printf("\nRun rate: %.2f per over",run_rate);
    printf("\nBest over: Over %d with %d runs",best+1,runs[best]);
	if(total_runs>=60){
		printf("\nTeam reached target of 60");
	}else{
		printf("\nNeeded %d more runs to reach 60",60-total_runs);
	}
	return 0;
}
