#include<stdio.h>
int main()
{
  char str[100],reverse[100];
  int i,length=0;
  int ispalindrome=1;
  printf("enter a document(string):");
  fgets(str,100,stdin);
  while(str[length]!='\0')
  {
    if(str[length]=='\n')
    {
      str[length]='\0';
      break;
    }
    length++;
  }
  for(i=0;i<length;i++)
  {
    reverse[i]=str[length-1-i];
  }
  reverse[length]='\0';
  printf("reverse string:%s\n",reverse);
  for(i=0;i<length;i++)
  {
    if(str[i]!=reverse[i])
    {
      ispalindrome=0;
      break;
    }
  }
  if(ispalindrome)
  {
    printf("the document(string)is a palindrome\n");
  }
  else
  {
    printf("the document(string)is not a palindrome\n");
  }
  return 0;
}
