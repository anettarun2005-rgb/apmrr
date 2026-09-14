#include<stdio.h>

#define MAX 100

struct emp{
  int id;
  char name[30];
  float salary;
  char dept[30];
};

struct emp e[MAX];
int n=0;

void inputemp()
{
  struct emp *p;
  printf("enter the emp id");
  scanf("%d",&p->id);
  printf("enter the emp name");
  scanf("%s",&p->name);
  printf("enter the emp salary");
  scanf("%f",&p->salary);
  printf("enter the dept");
  scanf("%s",&p->dept);
  printf("\n employee details are added successfully\n");
}

void displayemp()
{
  struct emp e;
  printf("emp id:%d \n",e.id);
  printf("emp name:%s \n",e.name);
  printf("emp salary:%f \n",e.salary);
  printf("emp dept:%s \n",e.dept);
}

void updateemp()
{
  int id,i,found=0;

  if(n==0)
  {
    printf("no employee data is available to update:");
    return;
  }
  printf("enter the emp id to update");
  scanf("%d",&id);

  for(i=0;i<n;i++)
  {
    if(e[i].id==id)
    {
      found=1;
      printf("emp found");

      printf("enter new name:");
      scanf("%s",e[i].name);
      printf("enter new salary:");
      scanf("%s",e[i].salary);
      printf("enter new dept:");
      scanf("%s",e[i].dept);

      printf("updated successfully! \n");

      break;
    }
  }



int main()
{
  struct emp e1;
  int choice;
  do{
    printf(" 1.input employee data \n2.display the details \n3.update \n4.exit \n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        inputemp();
        break;
      case 2:
        displayemp();
        break;
      case 3:
        //updateemp();
        break;
      case 4:
        printf("exit\n");
        break;
      default:
        printf("invalid choice\n");
    }
  }
  while(choice!=4);
  return 0;
}
