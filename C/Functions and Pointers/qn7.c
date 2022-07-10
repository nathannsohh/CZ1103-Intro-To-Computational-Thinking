#include <stdio.h>
void computeTotal(int numOfLines);
int main()
{
 int numOfLines;
 printf("Enter number of lines: \n");
 scanf("%d", &numOfLines); 
 computeTotal(numOfLines);
 return 0;
}
void computeTotal(int numOfLines)
{
 /* Write your code here */
 int i, j, placeholder, sum, num;
 for (i=1; i <= numOfLines; i++){
     sum = 0;
     printf("Enter line %d:\n", i);
     scanf("%d", &num);
     for (j = 0; j < num; j++){
         scanf("%d", &placeholder);
         sum += placeholder;
     }
     printf("Total: %d\n", sum);
 }
} 