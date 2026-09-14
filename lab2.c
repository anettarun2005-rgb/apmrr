#include <stdio.h>
int isprime(int n)
{
  int i;

    if(n<=1)
      return 0;

  for (i=2; i<=n/2; i++)
  {
    if(n%i==0)
      return 0;
}
return 1;
}
int main()
{
  int prime[100],n,i,count=0,a[100];
  printf("enter the number of element: ");
    scanf("%d",&n);

  printf("enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(isprime(a[i]))
    {
    prime[count]=a[i];
    count++;
  }
  }
  printf("the prime numbers are:\n");
    for(i=0; i<count; i++)
    {
      printf("%d\n",prime[i]);
}
  return 0;

}
