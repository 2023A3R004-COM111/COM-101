#include<stdio.h>
int main()
{
    int b,c,sum;
    sum=0;

    printf("enter the number: ");
    scanf("%d",&c);

    while(n>0)
    {
        b=c%10;
        sum=sum+b;
        c=c/10;
    }
    printf("sum is %d",sum);

    return 0;
}