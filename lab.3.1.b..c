#include <stdio.h>
#include <math.h>
int main() {
int x,y,b;
float a;
printf("Веддіть число x =");
scanf("%d",&x);
printf("Веддіть число y =");
scanf("%d",&y);
printf("Веддіть число b =");
scanf("%d",&b);
if(b < 0)
{
  a = b+sqrt(x-4*y);
  printf("Виконується перша умова\n%f",a);
}
 else if(b == 0)
{
  a = pow(b,2)-2*x*y+(4/(pow(b,2)-x*y));
  printf("Виконується третя умова\n%f",a);
} 
else if(b > 7)
{
  a = ((b*y)/(2*y-3*x))-4;
  printf("Виконується друга умова\n%f",a);
  }
else
{
  printf("Не виконується ні одна з умов задайті інші числа\n");
}
  return 0;
}
