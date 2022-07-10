#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
 int a[20],i,size=0,num;

 printf("Enter a number (between 100 and 999): \n");
 scanf("%d", &num);
 specialNumbers1D(a, num, &size);
 printf("specialNumbers1D(): ");
 for (i=0; i<size; i++)
 printf("%d ",a[i]);
 return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
 /* Write your code here */
 int i, placeholder, sum, start = 101, count = 0;
 while (start <= num){
     sum = 0;
     placeholder = start;
     while(placeholder){
        i = placeholder%10;
        sum += i*i*i;
        placeholder /= 10;     
    }
     if (sum == start){
         ar[count] = start;
         count += 1;
         *size += 1;
     }
     start++;
} 
}