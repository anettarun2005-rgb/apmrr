#include<stdio.h>
#include<string.h>
#include<ctype.h>
void convert(char str[])
{
  int i;
  for(i=0;str[i]!='\0';i++)
    str[i]=tolower(str[i]);
    printf("after conversion:%s",str);
}
int main()
{
  char str1[20],str2[20];
  int c;
  printf("enter 1st string:");
  scanf("%s",str1);
  printf("enter 2nd string:");
  scanf("%s",str2);
  strcat(str1,str2);
  printf("after concatenation %s\n", str1);
  printf("after comparsion:\n");
  c=strcmp(str1,str2);
  if(c==0)
    printf("2 strings are same");
        else
    printf("strings are different");
        convert(str1);
        return 0;
}
