#include <string.h>
#include <stdio.h>
void maxCharToFront(char *str);
int main()
{
 char str[80], *p;

 printf("Enter a string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("maxCharToFront(): ");
 maxCharToFront(str);
 puts(str);
 return 0;
}
void maxCharToFront(char *str)
{
 /* Write your code here */
 int i = 1;
 int maxindex;
 char temp1,temp2;
 char max = str[0];
 while(str[i] != '\0'){
     if (str[i] > max) {
         max = str[i];
         maxindex = i;
 }
    i++;
 }

temp1 = str[0];
str[0] = str[maxindex];


 for (i = 1; i <= maxindex; i++){
     temp2 = str[i];
     str[i] = temp1;
     temp1 = temp2;
 }
} 
    

