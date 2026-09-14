#include <stdio.h>
int main()
{
  int n,i,j,a[100];
  printf("enter the maximum number: ");
  scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
      a[i]=1;
    }
  a[0]=0;
  a[1]=0;

  for(i=2;i*i<=n;i++)
  {
    if(a[i]==1)
    {
      for(j=i*i;j<=n;j+=i)
      {
        a[j]=0;
      }
    }
  }
  printf("prime numbers are: \n");
  for(i=2;i<=n;i++)
  {
    if(a[i]==1)
    {
      printf("%d ",i);
    }
  }
  return 0;
}

