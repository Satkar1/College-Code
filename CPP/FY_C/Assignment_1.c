#include<stdio.h>
int main()
{
   int pp,d,da,dp,t,ta,ap;
   printf("Enter the printed price:");
   scanf("%d",&pp);
   printf("enter diacount");
   scanf("%d",&d);
   da=pp*d/100;
   dp=pp-da;
   printf("discounted price is%d",dp);
   printf("\nEnter sales tax");
   scanf("%d",&t); 
   ta=dp*t/100;
   printf("taxable amount is:%d",ta);
   ap=dp+ta;
   printf("\nThe final amount to be paid is%d",ap);
   
   return 0;
   }
   
   /*Enter the printed price:50000
enter diacount10
discounted price is45000
Enter sales tax5
taxable amount is:2250
The final amount to be paid is47250 */
