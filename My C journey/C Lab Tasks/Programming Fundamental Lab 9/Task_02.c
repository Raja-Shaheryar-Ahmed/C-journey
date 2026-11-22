#include<stdio.h>
int main(){
	int locker[10];
	int search,total=0,empty=0,i,item;
	printf("Enter item code in each locker (0 = empty):");
	for(i=0;i<10;i++){
		printf("\nLocker %d: ",i+1);
		scanf("%d",&locker[i]);
	}
	printf("\nEnter item code to seach: ");
	scanf("%d",&item);
	for(i=0;i<10;i++){
		if(locker[i]==item){
			printf("\nItem %d is in locker %d",item,i+1);
			total++;
		}
		if(locker[i]==0){
			empty++;
		}
	}
	printf("\nTotal loakers with this item: %d",total);
	printf("\nEmpty lockers: %d",empty);
	return 0;
}
