#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
 int num, result=999;
 printf("Enter a number: \n");
 scanf("%d", &num);
 printf("reverseDigits1(): %d\n", reverseDigits1(num));
 reverseDigits2(num, &result);
 printf("reverseDigits2(): %d\n", result);
 return 0;
}
int reverseDigits1(int num)
{
 /* Write your code here */
 int count = 0, i;
 while(num){
         i = num%10;
         count = count*10 + i;
         num /= 10;
     }
     return count;
}
void reverseDigits2(int num, int *result)
{
 /* Write your code here */
 int count = 0, i;
 while(num){
         i = num%10;
         count = count*10 + i;
         num /= 10;
     }
     *result = count;
}