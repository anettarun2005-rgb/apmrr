#include <stdio.h>
#include <string.h>

int main()
{
    int p,i,l,subl;
    char str[50],sub[20],result[70];

    printf("enter string:\n");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]='\0';

    printf("enter substring:\n");
    scanf("%s",sub);

    printf("enter position:\n");
    scanf("%d",&p);

    l=strlen(str);
    subl=strlen(sub);

    if(p<0 || p>l)
    {
        printf("invalid");
        return 0;
    }

    i=0;

    while(i<p)
    {
        result[i]=str[i];
        i++;
    }

    for(i=0;i<subl;i++)
    {
        result[p+i]=sub[i];
    }

    for(i=p;i<l;i++)
    {
        result[subl+i]=str[i];
    }

    result[l+subl]='\0';

    printf("after insertion %s",result);

    return 0;
}
