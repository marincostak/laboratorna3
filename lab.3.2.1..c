#include <stdio.h>
#include <math.h>
int main() {
int m1,V1,m2,V2;
float b1,b2;
printf("Веддіть число m1 =");
scanf("%d",&m1);
printf("Веддіть число V1 =");
scanf("%d",&V1);
printf("Веддіть число m2 =");
scanf("%d",&m2);
printf("Веддіть число V2 =");
scanf("%d",&V2);
b1 = m1/V1;
b2 = m2/V2;
if(b1 > b2)
{
  printf("Матеріал 1 тіла має більшу щільність ніж 2 тіла");
}
else if(b1 < b2)
{
  printf("Матеріал 2 тіла має більшу щільність ніж 1 тіла");
}
else
{
  printf("Матеріали тіл дорівнюють один одному");
}
  return 0;
}
