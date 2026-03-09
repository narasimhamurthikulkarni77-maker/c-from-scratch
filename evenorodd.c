#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()

{
int num;
printf("enter the num: \n");
scanf("%d", &num);

if(num %2 == 0)
printf("num %d is even",num);

else
printf("num %d is odd",num);


return 0;
}