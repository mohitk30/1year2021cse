/*AUTHOR MOHIT KUMAR*/
/*this programe is for reversing digits*/

#include<stdio.h>
void reverse(int n);
void sumofd(int n);
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
          reverse(n);   // calling function
          sumofd(n);
return 0;
}
void reverse(int n)
{
int x,temp=0;
            do{
              x=n%10;
               temp=temp*10+x;
                   n=n/10;
               }
                while(n!=0);
printf("Reversed no is:%d\n",temp);
}
void sumofd(int n)
{
int x,sum=0;
             do{
              x=n%10;
             sum+=x;
            n=n/10;
            }
             while(n!=0);
printf("Sum is:%d\n",sum);
}
