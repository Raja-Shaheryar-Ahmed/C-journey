#include<stdio.h>
int main(){
	int roll[6],marks[6],i,j,temp;
	for(i=0;i<6;i++){
		printf("\nStudent %d - roll no and marks: ",i+1);
		scanf("%d %d",&roll[i],&marks[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<6;j++){
			if(marks[i]<marks[j]){
				temp=marks[i];
				marks[i]=marks[j];
				marks[j]=temp;
				temp=roll[i];
				roll[i]=roll[j];
				roll[j]=temp;
			}
		}
	}
	printf("\nRank\tRoll\tMarks");
	for(i=0;i<6;i++){
		printf("\n%d\t%d\t%d",i+1,roll[i],marks[i]);
	}
	printf("\nPosition holders:");
	printf("\n1st: Roll %d (%d marks)",roll[0],marks[0]);
	printf("\n2nd: Roll %d (%d marks)",roll[1],marks[1]);
	printf("\n3rd: Roll %d (%d marks)\n",roll[2],marks[2]);
	return 0;
}
