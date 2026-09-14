#include<stdio.h>
int main()
{
  int a[10][10];
  int r,c,i,j;
  int rowsum,colsum,diagsum=0;
  printf("enter the no. of rows and columns:");
  scanf("%d%d",&r,&c);
  printf("enter the matrix elements:");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("\nmatrix:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        printf("%d",a[i][j]);
      }
      printf("\n");
    }
  printf("\nrowsum:\n");
    for(i=0;i<r;i++)
    {
      rowsum=0;
      for(j=0;j<c;j++)
      {
        rowsum+=a[i][j];
      }
      printf("row %d = %d\n",i+1,rowsum);
    }
    printf("\ncolsum:\n");
    for(j=0;j<c;j++)
    {
      colsum=0;
      for(i=0;i<r;i++)
      {
        colsum+=a[i][j];
      }
      printf("column %d = %d\n",j+1,colsum);
    }
    if(r==c)
    {
      for(i=0;i<r;i++)
      {
        diagsum+=a[i][i];
      }
      printf("diagsum %d\n",diagsum);
    }
    else
    {
      printf("\n diagonal sum is not possible\n");
    }
    printf("\ntranspose:\n");
      for(i=0;i<c;i++)
      {
        for(j=0;j<r;j++)
        {
          printf("%d",a[j][i]);
        }
          printf("\n");
        }
 
    return 0;
  }
 

























