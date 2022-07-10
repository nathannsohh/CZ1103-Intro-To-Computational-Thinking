#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int ar_generator(int ar[], int number);
    void histogram(int ar[]);
    
    printf("How many numbers to be generated in the histogram?\n");
    scanf("%d", &N);
    arr[10] = ar_generator(arr, N);
    histogram(arr);
    return 0;
}

int ar_generator(int ar[], int number){
    for(int i = 0; i <= number - 1; i++){
        int x = rand() % 100;
        switch(x){
            case 0 ... 9:
                ar[0] += 1;
                break;
            case 10 ... 19:
                ar[1] += 1;
                break;
            case 20 ... 29:
                ar[2] += 1;
                break;
            case 30 ... 39:
                ar[3] += 1;
                break;
            case 40 ... 49:
                ar[4] += 1;
                break;
            case 50 ... 59:
                ar[5] += 1;
                break;
            case 60 ... 69:
                ar[6] += 1;
                break;
            case 70 ... 79:
                ar[7] += 1;
                break;
            case 80 ... 89:
                ar[8] += 1;
                break;
            case 90 ... 99:
                ar[9] += 1;
                break;
        }
    }
    return *ar;
}

void histogram(int ar[]){
    int x = 0;
    for(int i = 0; i <= 9; i++){
        printf("%d - %d   | ", x,x+9);
        for(int j = 0; j < ar[i]; j++){
            printf("*");
        }
        x = x + 10;
        printf("\n");
    }
}
