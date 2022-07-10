#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
 int num, result;
 printf("Enter a number: \n");
 scanf("%d", &num);
 printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
 sumSqDigits2(num, &result);
 printf("sumSqDigits2(): %d\n", result);
 return 0;
}
int sumSqDigits1(int num)
{ 
 /* Write your code here */
 int i= 0, sum= 0;
 while(num){
     i = num % 10;
     sum += (i*i);
     num /= 10;
 }
 return sum;
}
void sumSqDigits2(int num, int *result)
{
 /* Write your code here */
  int i= 0, sum= 0;
 while(num){
     i = num % 10;
     sum += (i*i);
     num /= 10;
 }
 *result = sum;
}