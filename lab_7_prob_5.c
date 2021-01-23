/*AUTHOR MOHIT KUMAR*/
/*THIS IS FOR WRITING TABLE*/

#include<stdio.h>
void table(int n);    //declearation of function
int main()
{
int n;
printf("Enter a number which table you want to print:\n");
scanf("%d",&n);

printf("**************************\n");

table(n);         // calling function


printf("**************************\n");
return 0;
}
void table(int n)    //table function
{
int i;
for(i=0;i<=10;++i){
printf("\t%dx%d=%d\n",n,i,n*i);
}
}
