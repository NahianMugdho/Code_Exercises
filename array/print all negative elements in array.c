#include<stdio.h>
int main()
{
    int a[200];
    int i,n;
    printf("enter the value of size: \n");
    scanf("%d",&n);
    printf("enter the numbers: \n");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("all negative numbers are: ");
    for(i=0;i<=n;i++)
    {
        if (a[i]<0)
        {
            printf("%d",a[i]);
        }

    }



}


