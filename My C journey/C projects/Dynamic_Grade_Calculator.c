#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;  // this n will store the number of subjects from the user
	
	printf("Enter number of subjects: ");
	scanf("%d",&n);
	
	char **subjects = malloc(n * sizeof(char *));
	float *marks = malloc(n * sizeof(float));
	// the above two line will dynamically create arrays at runtime
	
	float total = 0;
	
	for (int i = 0; i < n; i++){
		subjects[i] = malloc(50 * sizeof(char));
		
		printf("\nEnter name of subject %d:  ", i + 1);
		scanf(" %49[^\n]", subjects[i]);
		
		printf("Enter marks for %s (out of 100):  ", subjects[i]);
		scanf("%f", &marks[i]);
		
		total += marks[i];
	}
	
	float percentage = total / n;
	printf("\nTotal marks: %.2f/%d", total, n * 100);
	printf("\nPercentage: %.2f%%\n", percentage);
	
	 if (percentage >= 80)
        printf("Grade: A\n");
    else if (percentage >= 70)
        printf("Grade: B\n");
    else if (percentage >= 60)
        printf("Grade: C\n");
    else if (percentage >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
        
    // free allocated memory
    for (int i = 0; i < n; i++){
    	free(subjects[i]);
	}
	
	free(subjects);
	free(marks);
	
	return 0;
	
}