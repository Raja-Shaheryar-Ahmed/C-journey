#include<stdio.h>
int main(){
	int tea=60;
	int samosa=40;
	int sandwich=180;
	int choice;
	int total_items=0;
	int total_bill=0;
	int discount=0;
	int payable=0;
	int quantity;
	do
		{
			printf("\n--------------------------------------");
			printf("\nChoice\tItem\t\tPrice(Rs)");
			printf("\n--------------------------------------");
			printf("\n1\tTea\t\t60");
			printf("\n2\tSamosa\t\t40");
			printf("\n3\tSandwich\t180");
			printf("\n4\tCheckout\t--");
			printf("\n--------------------------------------");
			printf("\nEnter choice: ");
       		scanf("%d",&choice);
       		if(choice<1||choice>4)
       			{
       				printf("\nInvalid choice. Try again");
				}
			else if(choice==1)
				{
					printf("Quantity: ");
          		    scanf("%d",&quantity);
          		    total_bill+=tea*quantity;
           			total_items+=quantity;
          			printf("Current bill: Rs %d\n",total_bill);
				}
			else if(choice==2)
				{
					printf("Quantity: ");
          		    scanf("%d",&quantity);
          		    total_bill+=samosa*quantity;
           			total_items+=quantity;
          			printf("Current bill: Rs %d\n",total_bill);
				}
			else if(choice==3)
				{
					printf("Quantity: ");
          		    scanf("%d",&quantity);
          		    total_bill+=sandwich*quantity;
           			total_items+=quantity;
          			printf("Current bill: Rs %d\n",total_bill);
				}
		}while(choice!=4);
			if(total_bill>1000)
				{
					discount=total_bill*0.10;
				}
			else
				{
					discount=0;
				}
	payable=total_bill-discount;
	printf("\nTotal items: %d",total_items);
	printf("\nBill: Rs %d",total_bill);
	printf("\nDiscount: Rs %d",discount);
	printf("\nPayable: Rs %d",payable);
	return 0;
}
