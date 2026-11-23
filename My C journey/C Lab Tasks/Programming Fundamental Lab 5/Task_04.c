#include<stdio.h>
int main()
{
	int students;
	int passed = 0;
	int failed = 0;
	int highest = -1;
	float average;
	int marks;
	int i;
	int sum = 0;
	printf("Enter number of students: ");
	scanf("%d",&students);
	if(students<1){
		printf("\nNumber of students must be at least 1");
		return 0;
	}
	for (i=1;i<=students;i++)
	{
		printf("\nMarks of student %d: ",i);
		scanf("%d",&marks);
		if(marks<0||marks>100){
			printf("Marks must be between 0 and 100");
			i--;
			continue;
		}
		sum+=marks;
		if(marks>=50){
			passed++;
			if(marks>highest){
				highest=marks;
			}
		}
		else{
			failed++;
		}
	}
	average=(float)sum/students;
	printf("\nPassed : %d",passed);
	printf("\nFailed : %d",failed);
	if(passed>0){
		printf("\nHighest : %d",highest);
	}
	else{
		printf("\nHighest : no student passed");
	}
	printf("\nAverage : %f",average);
	return 0;
}
