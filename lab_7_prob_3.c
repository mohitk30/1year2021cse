/* AUTHER MOHIT KUMAR*/
/* this is calculater using function*/

#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int divi(int a,int b);
int main()
{
int a,b,x;
printf("Enter two number:");
scanf("%d %d",&a,&b);
printf("Enter 1 for addition,2 for substration,3 for multiply,4 for division,5 for exit\n");
scanf("%d",&x);

if(x==1)     // condition checking
add(a,b);
else if (x==2)
sub(a,b);
else if(x==3)
mult(a,b);
else if(x==4)
{
if (b!=0){
   divi(a,b);}
else
printf("b cannot be 0");
}
else if (x==5)
printf("exit");
else               // again calling main function
main();

return 0;
}

int add(int a,int b )    // addition function
{
printf("addition of %d and %d is %d\n",a,b,a+b);
return 0;
}
int sub(int a,int b)   //subtraction function
{
printf("subtract %d from %d is %d\n",b,a,a-b);
return 0;
}
int mult(int a,int b)  // multiplying  function
{
printf("multiply of %d and %d is %d\n",a,b,a*b);
return 0;
}
int divi(int a,int b)  // division function
{
printf("division of %d and %d is %d \n",a,b,a/b);
return 0;
}


