#include <stdio.h>
#include <math.h>

int main(){
    float x1; float y1; float x2; float y2; double ans_sqr; double ans;
    float *px1; float *py1; float *px2; float *py2; double *pans; double *pans_sqr;
    float distance_sqr(float *px1, float *px2, float *py1, float *py2); float squaroot(double *pans_sqr);

    px1 = &x1;
    px2 = &x2;
    py1 = &y1;
    py2 = &y2;
    pans_sqr = &ans_sqr;
    pans = &ans;

    printf("Enter the X-coordinate of the first point: \n");
    scanf("%f", px2);
    printf("Enter the Y-coordinate of the first point: \n");
    scanf("%f", py2);

    printf("Enter the X-coordinate of the second point: \n");
    scanf("%f", px1);
    printf("Enter the Y-coordinate of the second point: \n");
    scanf("%f", py1);

    *pans_sqr = distance_sqr(&x1,&x2,&y1,&y2);
    *pans = squaroot(&ans_sqr);
    printf("The distance between the 2 points is %.2f", ans);
    return 0;
}


float distance_sqr(float *px1, float *px2, float *py1, float *py2){
    return pow((*px2-*px1),2) + pow((*py2-*py1),2);
    
}

float squaroot(double *pans_sqr){
    return sqrt(*pans_sqr);
}