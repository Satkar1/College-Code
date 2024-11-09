#include<stdio.h>
#include<string.h>
struct cust{
	     char Name[100];
	     int mobile[100];
	     char gender[100];
	     char city[100];
	   };
int main()
{ struct cust c1[10];

  int i,n;
  
  printf("Enter the no. of customers\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { printf("Enter name of customer\n");
    scanf("%s",c1[i].Name);
    printf("Enter mobile no.\n");
    scanf("%d",c1[i].mobile);
    printf("Enter gender\n");
    scanf("%s",c1[i].gender);
    printf("city:\n");
    scanf("%s",c1[i].city);
  }
  
  int op;
  printf("1.List with all details\n2.List with name and mobile no.");
  scanf("%d",&op);
  switch(op)
  {case 1:
    
  
     for(i=0;i<n;i++)
      { 
         printf("Name:%s ",c1[i].Name);
         printf("Mobile no.%ls",c1[i].mobile);
         printf("Gender%s",c1[i].gender);
         printf("city:%s",c1[i].city);
      }
      break;
   case 2:
     for(i=0;i<n;i++)
      { 
         printf("Name:%s \n",c1[i].Name);
         printf("Mobile no.%ls\n",c1[i].mobile);
      }
      break;
   }
  return 0;
}
  
