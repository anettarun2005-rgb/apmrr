#include <stdio.h>
#include <ctype.h>
int main()
{
  int i=0;
  char str[50];
    printf("enter a string: ");
  fgets(str,50,stdin);
  while (str[i] != '\0' && str[i] != '\n'){
    char st=tolower(str[i]);
  if(isalpha(st)){
  switch (st){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("\n vowels\n%c",str[i]);
      break;
    default:printf("\n constants \n%c",str[i]);
  }
}
else if(isdigit(st))
{
  printf("\n digit \n%c",str[i]);
}
else{
  printf("%c \n others \n",str[i]);
}
i++;
}
return 0;
}
