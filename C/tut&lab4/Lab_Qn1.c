#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
    char str[80],str2[80], *p;
  
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';  
    strcpy(str2,str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}
char *sweepSpace1(char *str)   
{
   /* Write your program code here */
    int x=0, y=0;
    while (str[x] != '\0') {
        if (str[x] == ' ') {
           y += 1;
           str[x] = str[x+1];
           x++;
       }
        else {
            str[x] = str[x+y];
            x++;
   }
    }
   return str;
}


char *sweepSpace2 (char *str) {
   /* Write your program code here */
    int i = 0, j = 0;
    while (*(str+i) != '\0'){
        if (*(str+i) == ' '){
            j += 1;
            *(str+i) = *(str + j);
            i++;
            j++;
        }
       else{
           *(str+i) = *(str+j);
           i++;
           j++;
       }
   }
   return str;
}