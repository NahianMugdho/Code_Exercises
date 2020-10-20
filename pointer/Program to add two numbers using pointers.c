#include<stdio.h>
int main()
{
    int num1,num2,sum;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
     printf("enter 2 numbers : \n");
     scanf("%d %d",ptr1,ptr2);

     sum= *ptr1 + *ptr2;
     printf("the sum is %d",sum);
     return 0;
}
