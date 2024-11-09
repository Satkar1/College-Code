#include<stdio.h>
#include<string.h>
int LCM(int m, int n);
int GCD(int m, int n);
int SMD(int m);
int main()
{
	int n,m,op,a,b,c,d;
	printf("Enter any two integer");
	scanf("%d%d",&m,&n);
	printf("Enter your choice\n 1.LCM\n 2.GCD\n 3.Smallest Divisor");
	scanf("%d",&op);
	
	switch(op)
	{    
	     case 1:
	      a=LCM(m,n);
	      printf("LCM of these two no. is %d",a);
	      break;
	     case 2:
	      b=GCD(m,n);
	      printf("GCD of these two no. is %d",b);
	      break;
	     case 3:
                        c=SMD(m);
	       printf("Smallest divisor of %d is %d",m,c);
                        d=SMD(n);
	       printf("Smallest divisor of %d is %d",n,d);
	       break;
	 }
	return 0;
}
int LCM(int m, int n)
{	
	int i,j,k;
	if(m>n)
  	{for(i=1;i<m;i++)
   	 {     for(j=1;j<n;j++)
             {    if( (j*m)==(j*n) )
	       	        {k=j*n;
		            printf("%d",k);
		            
                    }
	            }
	      break; 
	 }
  	}
  	else(m<n);
  	{for(i=1;i<n;i++)
   	 {     for(j=1;j<m;j++)
             {    if( (j*m)==(j*n) )
	       	        {k=j*m;
		            printf("%d",k);
		         
                    }
                   break; 
	         }
	         
	 }
  	}
}
int GCD(int m, int n)
{
	int i,j;
	for(i=2;(i<=m)&&(i<=n);++i)
	{  if((m%i==0)&&(n%i==0))
        { j=i;
		}
	 }
	printf("%d",j);
}
int SMD(int m)
{
	int i,j;
  	for(i=2;i<m;i++)
   	{     for(j=i;j<m;j++)
                         {    if( (j%m==0)  )
		{printf("%d",j);
		  break;
		 }
	         }
	 }
}
	