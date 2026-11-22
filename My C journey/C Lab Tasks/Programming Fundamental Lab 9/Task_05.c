#include<stdio.h>
int main(){
	int ticket[7];
	int i;
	for(i=0;i<7;i++){
		printf("\nTicket of person %d: ",i+1);
		scanf("%d",&ticket[i]);
	}
	int j;
	int genuine=0,forged=0;
	for(i=0;i<7;i++){
		int is_forged=0;
		for(j=0;j<i;j++){
			if(ticket[i]==ticket[j]){
				printf("\nFORGED: person %d used ticket %d, already used by person %d",i+1,ticket[i],j+1);
				forged+=1;
				is_forged=1;
				break;
			}
		}
		if(is_forged==0){
			genuine+=1;
		}
	}
	printf("\nGenuine: %d, Forged: %d",genuine,forged);
	return 0;
}