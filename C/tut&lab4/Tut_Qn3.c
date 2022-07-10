#include <stdio.h>

int main(){
    char str1[12] = "Hello", str2[10] = "abcdefghi";
    char *a;
    char *strncpy(char *s1, char *s2, int n);
    a = str1;
    a = strncpy(str1, str2, 10);
    puts(str1);
    return 0;
}

char *strncpy(char *s1, char *s2, int n){
    int i=0;
    while(s2[i] != '\0' && i < n){
        *(s1+i) = *(s2+i);
        i++;
    }
    return s1;
}