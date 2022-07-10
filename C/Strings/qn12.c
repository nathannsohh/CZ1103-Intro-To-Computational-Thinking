#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1 

int countSubstring(char str[], char substr[]);
int main()
{
 char str[80], substr[80], *p;
 int result=INIT_VALUE;

 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("Enter the substring: \n");
 fgets(substr, 80, stdin);
 if (p=strchr(substr,'\n')) *p = '\0';
 result = countSubstring(str, substr);
 printf("countSubstring(): %d\n", result);
 return 0;
}
int countSubstring(char str[], char substr[])
{
 /* Write your program code here */
 int i, j, k;
 int nosubstr, count;
 count = 0;
 nosubstr = 0;
 
 for (i = 0; str[i] != '\0'; i++){
     k = i;
     for (j = 0; substr[j] != '\0'; j++){
         if (str[k] == substr[j]){
             k++;
             count++;
             if (count == strlen(substr)) nosubstr++;
         }
         else count = 0;
     }
     count = 0;
 }
 return nosubstr;
 }