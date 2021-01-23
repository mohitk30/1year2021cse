void leap(int a,int b)
{
int i;
for(i=a;i<=b;++i){

if (i%400==0){
          printf("%d is a leap year\n",i);
             }             
else  if(i%4==0){
               if(i%100!=0){
                printf("%d is a leap year\n",i);
                            }
                }
else
printf("");
                   }
}
