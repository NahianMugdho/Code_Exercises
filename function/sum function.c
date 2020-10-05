#include<stdio.h>
int add(int num1,int num2)
    {
       int s=num1+num2;
        return s;
    }
int add(int num1, int num2);
int main()
{
    int n1,n2,sum;
    printf("Enter two numbers: \n");
    scanf("%d%d",&n1,&n2);

    sum=add(n1,n2);
    printf("Sum is %d",sum);
    return 0;
}
