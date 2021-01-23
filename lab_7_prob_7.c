/*AUTHER MOHIT KUMAR*/
/*This prob is for calculation power with recursion and without it*/
#include<stdio.h>
int withrecur(int a,int b);  //declearation
void withoutrecur(int a,int b);
int main()
{
int a,b;
printf("Enter a number and its superscript:");
scanf("%d %d",&a,&b);
     printf("With recursion: %d\n",withrecur(a,b));       //calling function
        printf("Without recursion:");
           withoutrecur(a,b);
return 0;
}
void withoutrecur(int a,int b)  //defining function
{
int i,temp=1;
              for(i=1;i<=b;++i){
                    temp*=a;
                                  }
            printf("%d\n",temp);
}
int withrecur(int a,int b)
{
int i,x;
          
    if(b!=0)
    return (a*withrecur(a,(b-1)));
   else
  return 1;
}



