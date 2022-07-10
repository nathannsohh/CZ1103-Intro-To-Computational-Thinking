#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
 int power;
 float number, result=-1;

 printf("Enter the number and power: \n");
 scanf("%f %d", &number, &power);
 printf("power1(): %.2f\n", power1(number, power));
 power2(number,power,&result);
 printf("power2(): %.2f\n", result);
 return 0;
}
float power1(float num, int p)
{
 /* Write your code here */
 int i, j;
 j = num;
 if (p > 0) for (i = 0; i < p-1; i++) num *= j;
 else if (p == 0) num = 1;
 else{
     p = -p;
     for (i = 0; i < p-1; i++) num *= j;
     num = 1/num;
 }
 return num;
}
void power2(float num, int p, float *result)
{
 /* Write your code here */
  int i, j;
 j = num;
 if (p > 0) for (i = 0; i < p-1; i++) num *= j;
 else if (p == 0) num = 1;
 else{
     p = -p;
     for (i = 0; i < p-1; i++) num *= j;
     num = 1/num;
 }
 *result = num;
}
