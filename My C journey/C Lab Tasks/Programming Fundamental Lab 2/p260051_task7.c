#include<stdio.h>
int main(){
	float vi = 12.5;
	float a = 3.2;
	float t = 6.0;
	float fi_vi;
	float dis_tra;
	fi_vi = vi + (a * t);
	dis_tra = (vi * t)+(0.5 * a * t * t);
	printf("Initial velocity (vi):\t%.2f\n",vi);
	printf("Acceleration (a):\t%.2f\n",a);
	printf("Time elapsed (t):\t%.2f\n",t);
	printf("-----------------------------\n");
	printf("Calculated final velocity (vf):\t%.2f\n",fi_vi);
	printf("Calculated distance (s):\t%.2f\n",dis_tra);
	return 0;
}