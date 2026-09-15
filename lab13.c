#include<stdio.h>
#include<string.h>
int main()
{
  int p,i,l,subl;
  char str[50],sub[20];
  printf("enter string:\n");
  scanf("%s",str);
  printf("enter substring:\n");
  scanf("%s",sub);
  printf("enter position:\n");
  scanf("%d",&p);
  l=strlen(str);
  subl=strlen(sub);
  for(i=1;i>=p;i--)
    str[i+subl]=str[i];
  for(i=0;i<subl;i++)
    str[p+i]=sub[i];
  printf("after insertion  %s",str);
  return 0;
}
