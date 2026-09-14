#include <stdio.h>
#include <string.h>
int main()
{
  int n,i,j,len,palindrome;
  printf("enter the number of product codes: ");
  scanf("%d",&n);
  char code[n][100];


  for(i=0;i<n;i++)
  {
    printf("enter the product code %d: ",i+1);
    scanf("%s",code[i]);
  }

  for(i=0;i<n;i++)
  {
    len=strlen(code[i]);
    palindrome=1;

    for(j=0;j<len/2;j++)
    {
      if(code[i][j]!=code[i][len-1-j])
      {
        palindrome=0;
        break;
      }
    }

    if(palindrome)
      printf("%s is a palindrome\n",code[i]);
    else
      printf("%s is not a palindrome\n",code[i]);
  }
  return 0;
}
