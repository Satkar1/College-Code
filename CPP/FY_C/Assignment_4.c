#include<stdio.h>
#include<string.h>
int main()
{ char a[100];
  char b[100];
  char c[100];
  char d[100];
  int op,n,i,j;
  printf("Enter the element of string1\n");
  scanf("%s",a);
  printf("Enter the element of string2\n");
  scanf("%s",b);
  printf("1.length,2.Copy string,3.Concatinate,4.Compare\n");
  printf("Enter your choice\n");
  scanf("%d",& op);
  
  switch(op)
     { 
       case 1:
         i=strlen(a);
         printf("length of string 1 is%d\n",i);
         j=strlen(b);
         printf("length of string 2 is%d\n",j);
       break;
       
       case 2:
         strcpy(c,a);
         printf("Element in string 3%s\n",c);
         strcpy(d,b);
         printf("Element in string 4%s\n",d);
       break;
       
       case 3:
         strcat(a,b);
         printf("Combination of these two string is %s\n",a);
       break;
       
       case 4:
         n=strcmp(a,b);
         if(n==0)
           {printf("Strings are equal\n");
           }
         else
           {printf("Strings are not equal\n");
           }
       break;
     }
  return 0;
}
       
