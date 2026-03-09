#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1,num2;
    printf("enter the num1:");
    scanf("%f", &num1);
    printf("enter the num2:");
    scanf("%f", &num2);

    if(num1>num2)
    printf("num %f is max /n", num1);

    else
    printf("num %f is min /n", num1);

    return 0;
}