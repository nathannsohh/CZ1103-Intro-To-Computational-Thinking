#include <stdio.h>

typedef struct {
    float operand1, operand2;
    char op;
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

int main(){
    float result,result1;
    bexpression first = {5,8,'*'};
    result = compute1(first);
    printf("%.2f ", result);
    result1 = compute2(&first);
    printf("%.2f",result1);
    return 0;
}   

float compute1(bexpression expr){
    float result;
    if (expr.op == '+') result = expr.operand1+expr.operand2;
    else if (expr.op == '-') result = expr.operand1-expr.operand2;
    else if (expr.op == '*') result = expr.operand1*expr.operand2;
    else result = expr.operand1/expr.operand2;
    return result;
}

float compute2(bexpression *expr){
    float result;
    if ((*expr).op == '+') result = (*expr).operand1+(*expr).operand2;
    else if ((*expr).op == '-') result = (*expr).operand1-(*expr).operand2;
    else if ((*expr).op == '*') result = (*expr).operand1*(*expr).operand2;
    else result = (*expr).operand1/(*expr).operand2;
    return result;
}