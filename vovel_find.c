#include<stdio.h>
#include<string.h>
void main()
{
 char str[100];
 int i,j;
 printf("Enter your string\n");
 scanf("%[^+]s",str);
 for(i=0 ; i<strlen(str) ; ++i){
 if((str[i]=='a') || (str[i]=='e')  || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U')){
++j;
}
                              }
printf("No. of vovels in Entered string:%s are %d\n",str,j);
}
