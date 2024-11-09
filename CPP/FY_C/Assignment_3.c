#include<stdio.h>
int main()
{
   int n,m,i,r,marks,max=0,num=0,min;
   printf("Enter total no. of students\n");
   scanf("%d",&n);
   printf("Enter total marks of exam");
   scanf("%d",&m);
   min=m;
   for(i=1;i<=n;i++)
    {  r=i;
       printf("\n for roll no. %d",r);
       printf("\n Mark:");
       scanf("%d",&marks);
       if(marks>=40)
       {
         num=num+1;
       }
       if(max<marks)
       {
         max=marks;
       }
       if(min>marks)
       {
         min=marks; 
       }
    }
   printf("No. of students passedin exam :%d\n",num);
   printf("Maximum marks=%d\n",max);
   printf("Minimum marks=%d",min);
   return 0;
 }

 /* Output:
 Enter total no. of students
5
Enter total marks of exam50

 for roll no. 1
 Mark:20

 for roll no. 2
 Mark:30

 for roll no. 3
 Mark:40

 for roll no. 4
 Mark:50

 for roll no. 5
 Mark:60
No. of students passedin exam :3
Maximum marks=60
Minimum marks=20
*/

