#include <stdio.h>
#include <math.h>
int main() {
  int x,z,y;
float f,m,n;
printf("Веддіть число x =");
scanf("%d",&x);
printf("Веддіть число y =");
scanf("%d",&y);
printf("Веддіть число z =");
scanf("%d",&z);
m = x-y;
if (m < 0)
{ 
  printf("Неможливо взяти коріть з відємного числа задайте інші числа\n");
}

else{
f = (pow(x,2)+pow(z,2))/n;
printf("f=%f",f);
}
  return 0;
}