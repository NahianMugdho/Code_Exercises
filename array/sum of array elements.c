#include<stdio.h>
int main()
{
    int sum=0, i,n,a[100];
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the values : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("the sum is : %d",sum);
}
