#include<stdio.h>
#include<string.h>
int main()
{
  int n,j,i,k;
  char email[100][100];
  printf("enter the no of customers:");
  scanf("%d",&n);
  printf("enter the email adddress:");
  for(i=0;i<n;i++)
  {
    scanf("%s",email[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(email[i],email[j])==0)
      {
        for(k=j;k<n-1;k++)
        {
          strcpy(email[k],email[k+1]);
        }
        n--;
        j--;
      }
    }
  }
  printf("\nunique email address:\n");
  for(i=0;i<n;i++)
  {
    printf("%s\n",email[i]);
  }
  return 0;
}

