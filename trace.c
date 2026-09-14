#include<stdio.h>
int main()
{
  int a[10][10];
  int i,j,r,c,trace=0;
  printf("enter rows and columns: ");
  scanf("%d%d",&r,&c);
  printf("enter matrix:\n");
  for(i=0;i<r;i++)
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
  if(r==c)
  {
  for(i=0;i<r;i++)
    trace+=a[i][i];
  printf("trace=%d",trace);
  }
  else
  {
  printf("trace is not possible");
  }
  return 0;
}

