/*AUTHOR MOHIT KUMAR*/
/*this programe is for swaping first and last digit of a number*/
#include<stdio.h>
void swapf_l(int n);
void mid(int a);
int main()
{
int n;
printf("Enter a positive  number:");
scanf("%d",&n);
printf("after swaping first and last degit:");

swapf_l(n);
return 0;
}
void swapf_l(int n)
{
int x;
if(n<10)
printf("%d",n);
else{
       x=n%10;
          if (n>=10){
          printf("%d",x);
         mid(n/10);      
         do{
          n=n/10;
            }
              while(n>10);
             printf("%d\n",n);
               }
    }
}
void mid(int a)
{
if(a>=10){
         mid(a/10);
          printf("%d",a%10);
         }
       
}
