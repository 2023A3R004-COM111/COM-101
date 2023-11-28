#include<stdio.h>
int main()
{
    int num1, num2;
    float r,s,t,u,v;

    printf("enter the first integer: ");
    scanf("%d", &num1);

    printf("enter the second integer: ");
    scanf("%d", &num2);

    r= num1+num2;
    printf("sum: %f\n", r);

    s= num1-num2;
    printf("difference: %f\n", s);

    t= num1*num2;
    printf("product: %f\n", t);

    u= num1/num2;
    printf("remainder: %f\n", u);

    v= num1%num2;
    printf("modulus: %f\n", v);

    return 0;
}