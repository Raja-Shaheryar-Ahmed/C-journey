#include<stdio.h>
int main(){
	char ch = 'R';
	int integer = 17;
	float value = 356.7645;
	double doublee = 1100.48;
	printf("Type name\tVariable value\tSize in memory\n");
	printf("char\t\t'R'\t\t%d byte(s)\n",sizeof(char));
	printf("int\t\t17\t\t%d byte(s)\n",sizeof(int));
	printf("float\t\t356.7645\t\t%d byte(s)\n",sizeof(float));
	printf("double\t\t1100.48\t\t%d byte(s)\n",sizeof(double));
	return 0;
} 