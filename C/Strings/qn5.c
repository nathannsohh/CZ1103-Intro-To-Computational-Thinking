#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
 char str[50], *p;
 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("countWords(): %d", countWords(str));
 return 0;
}
int countWords(char *s)
{
 /* Write your code here */
 int i, count = 0;
 for(i = 0; s[i] != '\0'; i++){
     if (s[i] == ' ') count++;
 }
 return count+1;
}