#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
 int number, result=0;

 printf("Enter a number: \n");
 scanf("%d", &number);
 printf("Calling perfectProd1() \n");
 printf("perfectProd1(): %d\n", perfectProd1(number));

 printf("Calling perfectProd2() \n");
 perfectProd2(number, &result);
 printf("perfectProd2(): %d\n", result);
 return 0;
}
int perfectProd1(int num)
{
 /* Write your code here */
 int n, i, sum, prod = 1;
 for (n = 1; n < num; n++){
     i = 1;
     sum = 0;
     while (i<n){
         if (n%i==0) sum = sum + i;
         i++;
     }
     if (sum == n) {
         printf("Perfect number: %d\n", n);
         prod *= n;
 }
}
    return prod;
}
void perfectProd2(int num, int *prod)
{
 /* Write your code here */
  /* Write your code here */
 int n, i, sum;
 *prod = 1;
 for (n = 1; n < num; n++){
     i = 1;
     sum = 0;
     while (i<n){
         if (n%i==0) sum = sum + i;
         i++;
     }
     if (sum == n) {
         printf("Perfect number: %d\n", n);
         *prod *= n;
 }
}
}