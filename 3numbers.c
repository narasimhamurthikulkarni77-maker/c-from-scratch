#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,c;
int max,min;

printf("enter the num1:");
scanf("%d", &a);

printf("enter the num2:");
scanf("%d", &b);

printf("enter the num3:");
scanf("%d", &c);

max=a;
min=b;


if(a<b)
{
    max=b;
    min=a;
}

if(max<c)
max=c;

if(c<min)
min=c;

printf("maxminum between the 3 numbers = %d\n ", max);
printf(" minmum between the 3 numbers =%d\n ", min);

return 0;

}














