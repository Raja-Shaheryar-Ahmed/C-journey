#include<stdio.h>
int main(){
	int tea_quant;
	int samosa_quant;
	int chicken_roll_quant;
	tea_quant = 3;
	samosa_quant = 4;
	chicken_roll_quant = 2;
	float unit_price_tea;
	float unit_price_samosa;
	float unit_price_chicken_roll;
	unit_price_tea = 60.00;
	unit_price_samosa = 40.50;
	unit_price_chicken_roll = 120.00;
	float sub_total_tea;
	float sub_total_samosa;
	float sub_total_chicken_roll;
	sub_total_tea = (tea_quant*unit_price_tea);
	sub_total_samosa = (samosa_quant*unit_price_samosa);
	sub_total_chicken_roll = (chicken_roll_quant*unit_price_chicken_roll);
	float sub_total;
	sub_total = (tea_quant*unit_price_tea)+(samosa_quant*unit_price_samosa)+(chicken_roll_quant*unit_price_chicken_roll);
	float GST_tax;
	GST_tax = (0.16*sub_total);
	float grand_total;
	grand_total = sub_total + GST_tax;
	printf("\t\tFAST CAFETERIA RECEIPT\n");
	printf("Item\t\tQty\t\tUnit price (PKR)\tSubtotal (PKR)\n");
	printf("--------------------------------------------------------------------\n");
	printf("Tea\t\t%d\t\t%.2f\t\t\t%.2f\n",tea_quant,unit_price_tea,sub_total_tea);
	printf("Samosa\t\t%d\t\t%.2f\t\t\t%.2f\n",samosa_quant,unit_price_samosa,sub_total_samosa);
	printf("Chicken roll\t%d\t\t%.2f\t\t\t%.2f\n",chicken_roll_quant,unit_price_chicken_roll,sub_total_chicken_roll);
	printf("--------------------------------------------------------------------\n");
	printf("Subtotal:\t\t\tPKR %.2f\n",sub_total);
	printf("GST (16%%):\t\t\tPKR %.2f\n",GST_tax);
	printf("--------------------------------------------------------------------\n");
	printf("Grand total:\t\t\tPKR %.2f",grand_total);
	return 0;
}