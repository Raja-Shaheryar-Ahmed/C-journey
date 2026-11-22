#include<stdio.h>
int main()
{
	int students;
	int passed = 0;
	int failed = 0;
	int highest=-1;
	float average;
	int marks;
	int i;
	int sum=0;
	printf("Enter number of students: ");
	scanf("%d",&students);
	for (i=1;i<=students;i++)
	{
		printf("\nMarks of student %d: ",i);
		scanf("%d",&marks);
		if(marks>=50&&marks<=100){
			passed++;
			sum+=marks;
			if(marks>highest){
				highest=marks;
			}
			}
		else if(marks<50){
			failed++;
			sum+=marks;
		}
	}
	average=sum/students;
	printf("\nPassed : %d",passed);
	printf("\nFailed : %d",failed);
	printf("\nHighest : %d",highest);
	printf("\nAverage : %f",average);
	return 0;
}
