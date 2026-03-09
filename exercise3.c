#include<stdio.h>
#include<stdlib.h>

int main(){
int hour,minutes,remainingseconds;

int totalseconds;


printf("enter the totalseconds:");
scanf("%d", &totalseconds);


hour=totalseconds/3600;
minutes=(totalseconds-hour*3600)/60;
remainingseconds=(totalseconds-hour*3600)%60;
printf("converted value in hours: %d /n", hour);
printf("converted value in minute: %d /n", minutes);
printf("converted value in remaining second: %d /n", remainingseconds);

return 0;

}