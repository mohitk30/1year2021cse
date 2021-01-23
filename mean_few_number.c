/*HERE IS A PROGRAME FOR ARRAINGING NUMBER IN ACCENDING ORDER*/
/*SHORTING*/
#include<stdio.h>
int main()
{
 int mean[10];
 int i,j,temp,me;
 for(i=0 ; i<10 ; ++i)
  {
   scanf("%d",&mean[i]);
  }
 for(i=0 ; i<10 ;++i){
    for(j=i+1 ;j<10 ;++j)
   {
    if (mean[i] > mean[j]){
     temp=mean[i];
     mean[i]=mean[j];
     mean[j]=temp;
                      }
   }
                   }
 printf("number in increasing order are\n");
 for(i=0 ; i<10 ; ++i){
   printf("%d\t",mean[i]);
                  }
me=mean[4]+mean[5];

 printf("mean is %f\n",(float)me/2);
}
