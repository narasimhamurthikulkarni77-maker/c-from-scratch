#include<stdio.h>
#include<stdlib.h>

int main() 
{
 float a1,an;
 int n;
 float sn;
 printf("enter the first term:");
 scanf("%f", &a1);

 printf("enter the nth term:");
 scanf("%f", &an);

 printf("enter the nth term \n:");
 scanf("%d", &n);

sn=(a1+an)*n/2;
printf("total sum of sequence=%f\n", sn);

return 0;

}