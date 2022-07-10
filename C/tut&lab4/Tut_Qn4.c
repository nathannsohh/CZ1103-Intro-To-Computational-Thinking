#include <stdio.h>

int main(){
    char str1[5] = "abcd", str2[5] = "ABCD";
    int stringcmp(char *s1, char *s2);
    int x;

    x = stringcmp(str1, str2);
    printf("%d",x);
    return 0;
}

int stringcmp(char *s1, char *s2){
    int y;
    if (*s1 < *s2) y = -1;
    else if (*s1 > *s2) y = 1;
    else y = 0;
    return y;
}