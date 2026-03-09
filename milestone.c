#include<stdio.h>
#include<stdlib.h>

int main(){
double temp;
 double fahrenheit;

printf("enter the temp:");
scanf("%lf", &temp);
fahrenheit=(temp*1.8)+32;
printf( " converted value temp int fahr=%lf \n",fahrenheit);

return 0;


}