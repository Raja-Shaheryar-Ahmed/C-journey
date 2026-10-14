#include<stdio.h>
int main(){
	float marks_PF;
	float marks_CAL;
	float marks_AP;
	marks_PF = 88.0;
	marks_CAL = 76.5;
	marks_AP = 82.0;
	int CH_PF;
	int CH_CAL;
	int CH_AP;
	CH_PF = 3;
	CH_CAL = 3;
	CH_AP = 2;
	float total_weighted_score;
	int total_CH;
	float weighted_avg_percentage;
	total_weighted_score = (88.0 * 3) + (76.5 * 3) + (82.0 * 2);
	total_CH = 3 + 3 + 2;
	weighted_avg_percentage = total_weighted_score / total_CH;
	printf("\tSEMESTER ACEDEMIC REPORT\n");
	printf("Course\t\tCredit hour\tObtained marks\n");
	printf("----------------------------------------------\n");
	printf("Programming fund.\t%d\t\t%.2f\n",CH_PF,marks_PF);
	printf("Calculus\t\t%d\t\t%.2f\n",CH_CAL,marks_CAL);
	printf("Applied physics\t\t%d\t\t%.2f\n",CH_AP,marks_AP);
	printf("----------------------------------------------\n");
	printf("Total credits:\t%d\tWeighted average:\t%.2f",total_CH,weighted_avg_percentage);
	return 0;
}