/*AUTHOR MOHIT KUMAR*/
/*tower of haoni problem*/
#include<stdio.h>
void towerofh(int n,char from,char to,char center);
int main()
{
int n;
char A,B,C;
printf("Enter number of disk:");
scanf("%d",&n);
towerofh(n,'A','C','B');
return 0;
}
void towerofh(int n, char from, char to, char center) 
{ 
    if (n == 1) 
              { 
        printf("Move disk 1 from rod %c to rod %c\n", from, to); 
        return; 
               } 
    towerofh(n-1, from, center, to); 
    printf("Move disk %d from rod %c to rod %c\n", n, from, to); 
    towerofh(n-1, center, to, from); 
} 
  
