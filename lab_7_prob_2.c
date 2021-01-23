/*auther is MOHIT KUMAR*/
/*call by value and reference*/
#include<stdio.h>
void swap_1(int a,int b);
void swap_2(int *a,int *b);
int main()
{
int a,b;
printf("Enter two number :");
scanf("%d %d",&a,&b);
printf("\n");
printf("number 1 is:%d,number 2 is :%d\n",a,b);
swap_1(a,b);    //by value
swap_2(&a,&b);  //by reference
printf("again in main\n");
printf("number 1 is :%d,number 2 is :%d\n",a,b);

return 0;
}
void swap_1(int a,int b)
{
int t;
printf("after swap\n");
t=a;
a=b;
b=t;
printf("number 1 is %d,number 2 is %d\n",a,b);
}
void swap_2(int *a,int *b)
{
int *t;
t=*a;
*a=*b;
*b=t;
}
