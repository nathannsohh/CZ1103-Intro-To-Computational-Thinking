#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
 int number, result = INIT_VALUE;

 printf("Enter a number: \n");
 scanf("%d", &number);
 printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
 extEvenDigits2(number, &result);
 printf("extEvenDigits2(): %d\n", result);
 return 0;
}
int extEvenDigits1(int num)
{
 /* Write your code here */
 int count = 0, i, count2=0;
 while(num){
     i = num%10;
     if (i%2==0){
         count = (count*10)+i;
     }
     num /= 10;
 }
 if (count == 0) return -1;
 else{
     while(count){
         i = count%10;
         count2 = count2*10 + i;
         count /= 10;
     }
     return count2;
 } 
}
void extEvenDigits2(int num, int *result)
{
 /* Write your code here */
 int count = 0, i, count2=0;
 while(num){
     i = num%10;
     if (i%2==0){
         count = (count*10)+i;
     }
     num /= 10;
 }
 if (count == 0) *result = -1;
 else{
     while(count){
         i = count%10;
         count2 = count2*10 + i;
         count /= 10;
     }
     *result = count2;
 } 
}