#include <stdio.h>

struct circle {
    double radius;
    double x;
    double y;
};

int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);

int main(){
    int result,result1;
    struct circle c1 = {10,4,5};
    struct circle c2 = {4,5,6};
    result = intersect(c1,c2);
    printf("%d ",result);
    result1 = contain(&c1,&c2);
    printf("%d", result1);
    return 0;
}

int intersect(struct circle c1, struct circle c2){
    double distance,rad_sum;
    int output;
    distance = (c1.x-c2.x)*(c1.x-c2.x) + (c1.y-c2.y)*(c1.y-c2.y);
    rad_sum = c1.radius + c2.radius;
    if (distance <= rad_sum) return 0;
    else return 1;
}

int contain(struct circle *c1, struct circle *c2){
    double distance,sum;
    distance = ((*c1).x-(*c2).x)*((*c1).x-(*c2).x) + ((*c1).y-(*c2).y)*((*c1).y-(*c2).y);
    sum = distance + (*c2).radius;
    if ((*c1).radius >= sum) return 1;
    else return 0;
}

