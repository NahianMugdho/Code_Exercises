#include<stdio.h>
int main()
{
   int a,b,c,i,terms;
   printf("Enter no. of terms : \n");
   scanf("%d",&terms);
   a=0;
   b=1;
   c=0;
   printf("fibonacci Series : \n");
   for(i=1;i<=terms;i++)
   {
       printf("%d\n",c);
       a=b;
       b=c;
       c=a+b;
   }
   return 0;



}
