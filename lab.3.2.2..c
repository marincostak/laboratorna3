#include <stdio.h>
#include <string.h>
int main() {
int n = 0;
printf("Веддіть число місяця\n");
scanf("%d",&n);
switch(n)
{
case 12:case 1:case 2:
printf("Зима\n");
break;
case 3:case 4:case 5:
printf("Весна\n");
break;
case 6:case 7:case 8:
printf("Літо\n");
break;
case 9:case 10:case 11:
printf("Осінь\n");
break;
default:
printf("Ви ввели число більше 12, такого місяця не існує, будь-ласка введіть від 1 до 12 \n");
}
  return 0;
}
