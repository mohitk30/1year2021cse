/*AUTHER  MOHIT KUMAR*/
/*THIS PROGRAME IS FOR PRINTING YEAR AS LEAP YEAR IN A RANGE*/
/*date 16/1/2021*/
#include<stdio.h>
#include "leap.h"
int main()
{
int a,b;
printf("Enter range of years:");
scanf("%d %d",&a,&b);
printf("\n");
leap(a,b);
return 0;
}
