#include<stdio.h>
//GST adder in price
void finalPrice(float price);
int main()
{
   float price;
   printf("enter your product's total price :");
   scanf("%f\n",&price);
   
 printf("your price is %f\n",price);
   finalPrice(price);
  
   return 0;
}

void finalPrice(float price){
    printf("add GST your price is : %f\n",price+(0.18*price));

}