#include<stdio.h>
int main()
{
  int i,j,n,r;
  printf("enter the number of rows: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      printf(" ");
      r=1;
    }
    for(j=0;j<=i;j++)
    {
      printf("%d ",r);
      r=r*(i-j)/(j+1);
    }
  printf("\n");
  }
  return 0;
}
