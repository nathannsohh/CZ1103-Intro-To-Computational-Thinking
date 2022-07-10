#include <stdio.h>
#include <math.h>

int main(){
    float x1; float y1; float x2; float y2; double ans_sqr; double ans;
    float distance_sqr(float x1, float x2, float y1, float y2); float squaroot(double ans);

    printf("Enter the X-coordinate of the first point: \n");
    scanf("%f", &x2);
    printf("Enter the Y-coordinate of the first point: \n");
    scanf("%f", &y2);

    printf("Enter the X-coordinate of the second point: \n");
    scanf("%f", &x1);
    printf("Enter the Y-coordinate of the second point: \n");
    scanf("%f", &y1);

printf("(%f,%f), (%f,%f)\n", x2,y2,x1,y1);

    ans_sqr = distance_sqr(x1,x2,y1,y2);

printf("%f\n",ans_sqr);

    ans = squaroot(ans_sqr);
    printf("The distance between the 2 points is %lf", ans);
    return 0;
}


float distance_sqr(float x1, float x2, float y1, float y2){
    return pow((x2-x1),2) + pow((y2-y1),2);
    
}

float squaroot(double ans){
    return sqrt(ans);
}