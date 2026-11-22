#include<stdio.h>
void convertTime(int totalSeconds,int *h,int *m,int *s);
void addSeconds(int *h,int *m,int *s,int extra);
int main(){
	int total_seconds,extra,hours,minutes,seconds;
	printf("Enter total seconds: ");
	scanf("%d",&total_seconds);
	convertTime(total_seconds,&hours,&minutes,&seconds);
	printf("\nTime: %02d:%02d:%02d\n",hours,minutes,seconds);
	printf("\nEnter seconds to add: ");
	scanf("%d",&extra);
	addSeconds(&hours,&minutes,&seconds,extra);
	printf("\nNew Time: %02d:%02d:%02d\n",hours,minutes,seconds);
	return 0;
}
void convertTime(int totalSeconds,int *h,int *m,int *s){
	*h=totalSeconds/3600;
    *m=(totalSeconds%3600)/60;
    *s=totalSeconds%60;
    return;
}
void addSeconds(int *h,int *m,int *s,int extra){
	int new_total=((*h)*(3600))+((*m)*(60))+(*s)+(extra);
    convertTime(new_total,h,m,s);
}
