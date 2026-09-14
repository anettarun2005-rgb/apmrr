#include<stdio.h>
struct complex{
  int real;
  int img;
}c[2],s,d;
int main()
{
  int i;
  for(i=0;i<2;i++)
  {
    printf("enter real and imaginary parts\n");
    scanf("%d%d",&c[i].real,&c[i].img);
  }
  s.real=c[0].real+c[1].real;
  s.img=c[0].img+c[1].img;
  d.real=c[0].real-c[1].real;
  d.img=c[0].img-c[1].img;
  printf("sum of complex numbers\n");
  printf("%d+i%d",s.real,s.img);
  printf("\ndifference of complex numbers\n");
  printf("%d+i%d",d.real,d.img);
  return 0;
}

