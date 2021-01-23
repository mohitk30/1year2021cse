/*writer is MOHIT KUMAR*/
/*this programe is for converting a decimal in other type*/
/*use function*/
#include<stdio.h>
void binary(int n);
void octal(int n);
void hexadecimal(int n);
int main()
{
int n;
printf("Enter number:");
scanf("%d",&n);
printf("\n");
printf("Binary    :");  // binary value 
binary(n);
printf("\n");
printf("octal     :");  //octal value
octal(n);
printf("\n");
printf("hexadecimal:");  // hexadecimal value
hexadecimal(n);
printf("\n");
return 0;
}
void binary(int n)     // binary function
{
int x;
x=n%2;
     if((n>1)){
      binary(n/2);
       printf("%d",x);
          }
else{
      printf("%d",x);
    }
}
void octal(int n)    // octal function
{
int x;
x=n%8;
    if((n>8)){
    octal(n/8);
    printf("%d",x);
        }
else{
         printf("%d",x);
    }
}
void hexadecimal(int n)    // hexadecimal function
{
int x;
x=n%16;
   if ((n>=16)){
   hexadecimal(n/16);
  printf("%d",x);
  }
else if ((n>=10) && (n<16)){
   if (n==10)
  printf("A");
  else if (n==11)
  printf("B");
  else if (n==12)
  printf("C");
  else if (n==13)
  printf("D");
  else if (n==14)
  printf("E");
  else if (n==15)
  printf("F");
                           }
else
printf("%d",x);
}
