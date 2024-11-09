#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   float p,area,A,s;
   printf("Enter the length of three sides of triangle:");
   scanf("%d%d%d",&a,&b,&c);
   if (a==b & a==c)
   { 
   printf("The triangle is equilateral triangle");
   }
   else if (a==b & b!=c || a==c & c!=b || b==c & c!=a)
   {
   printf("The triangle is isoscales");
   }
   else if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
   {
   printf("The triangle is right angled tringle");
   }
   else
   {
   printf("The triangle is scalane triangle");
   }
   p=a+b+c;
   printf("\nThe perimeter of tringle is %f",p);
   s=p/2;
   A=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("\nArea of triangle is %f",A);
    return 0;
   }
