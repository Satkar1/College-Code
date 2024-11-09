#include<stdio.h>
int main()
{ int r,c,i,j,k,op,mat1[50][50],mat2[50][50],sum[50][50],matt1[50][50],matt2[50][50],mul[50][50];
  printf("Enter the no. of rows and columns of matrix");
  scanf("%d%d",&r,&c);
  
  printf("Enter the elements of matrix 1st\n");
  for(i=0;i<r;i++)
   {for(j=0;j<c;j++)
     {scanf("%d",&mat1[i][j]);}
   }
  printf("Enter the elements of matrix 2nd\n");
  for(i=0;i<r;i++)
   {for(j=0;j<c;j++)
     {scanf("%d",&mat2[i][j]);}
   }
  printf("1.Add,2.multiplication,3.transpose\n");
  printf("Enter your choice");
  scanf("%d",&op);

  switch(op)
      {case 1:
          printf("Sum of these two matrix is\n");
          for(i=0;i<r;i++)
             {  for(j=0;j<c;j++)
                 {
                      sum[i][j]=mat1[i][j]+mat2[i][j];
     
                       printf("%d\t",sum[i][j]);
                 }
                printf("\n");
             }
          break;
         
          case 2:
              printf("Multiplication of matrix=\n");
              for(i=0;i<r;i++)
                 {for(j=0;j<c;j++)
                     {
                          for(k=0;k<c;k++)
                               {mul[i][j]+=mat1[i][k]*mat2[k][j];
                               }
                     }
                 }
             for(i=0;i<r;i++)
                {for(j=0;j<c;j++)
                     {printf("%d\t",mul[i][j]);
                     }
                  printf("\n");
                }
           break;
          
          case 3 :
              for(i=0;i<r;i++)
                {for(j=0;j<c;j++)
                    {matt1[i][j]=mat1[j][i];
                    }
                }
              printf("transpose of given matrix 1 is\n");
              for(i=0;i<r;i++)
                 {for(j=0;j<c;j++)
                     {printf("%d\t",matt1[i][j]);
                     }
                   printf("\n");
                 }
               for(i=0;i<r;i++)
                 {for(j=0;j<c;j++)
                     { matt2[i][j]=mat2[j][i];
                      }
                 }
              printf("transpose of given matrix 2 is\n");
              for(i=0;i<r;i++)
                  {for(j=0;j<c;j++)
                        {printf("%d\t",matt2[i][j]);
                         }
                    printf("\n");
                  }
              break;
        }
      return 0;
   }