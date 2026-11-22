#include<stdio.h>
int main(){
	int age;
	float cgpa;
	char grade;
	int *ptr_age;
	float *ptr_cgpa;
	char *ptr_grade;
	ptr_age=&age;
	ptr_cgpa=&cgpa;
	ptr_grade=&grade;
	printf("Enter age: ");
	scanf("%d",&age);
	printf("\nEnter CGPA: ");
	scanf("%f",&cgpa);
	printf("\nEnter grade: ");
	scanf(" %c",&grade);
	printf("\nage = %d\tvia pointers = %d\t&age = %p\t\t\tpAge = %p",age,*ptr_age,&age,ptr_age);
	printf("\ncgpa = %.2f\tvia pointers = %.2f\t&cgpa = %p\t\tpCgpa = %p",cgpa,*ptr_cgpa,&cgpa,ptr_cgpa);
	printf("\ngrade = %c\tvia pointers = %c\t&grade = %p\t\tpGrade = %p",grade,*ptr_grade,&grade,ptr_grade);
	printf("\n&pAge = %p\t&pCgpa = %p\t&pGrade = %p",&ptr_age,&ptr_cgpa,&ptr_grade);
	*ptr_age += 1;
	*ptr_cgpa += 0.25;
	*ptr_grade += 1;
	printf("\nAfter changing through pointers: ");
	printf("\nage = %d, cgpa = %.1f, grade = %c",age,cgpa,grade); 
	return 0;                                                                
}                        
