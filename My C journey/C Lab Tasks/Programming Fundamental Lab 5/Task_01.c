#include<stdio.h>
int main()
{
	int runs;
	int total = 0;
	int sixer = 0;
	int dot = 0;
	int i;
	
	for (i=1;i<=6;i++)
	{
		printf("\nBall %d runs: ",i);
		scanf("%d",&runs);
		if(runs==6){
			sixer+=1;
		}else if (runs==0){
			dot+=1;
		}
		total = total + runs;
	}
	printf("\nTotal runs: %d",total);
	printf("\nBoundaries : %d",sixer);
	printf("\nDot balls: %d",dot);
	return 0;
}
