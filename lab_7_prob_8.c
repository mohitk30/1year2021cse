/*AUTHOR MOHIT KUMAR*/
/* for finding sum of series*/
#include<stdio.h>
float series(int n);
int fact(int n);
int main()
{
int n;
printf("enter a number ");
scanf("%d",&n);
printf("The sum of series 1/1!+2/2!...%d/%d! is :%f\n",n,n,series(n));
return 0;
}
float series(int n)
{
int i;
float sum=0;
for(i=1;i<=n;++i){
sum+=(float)i/(float)fact(i);
}
return sum;
}
int fact(int n)
{
int i,fact=1;
for(i=1;i<=n;++i){
fact*=i;
}
return fact;
}
