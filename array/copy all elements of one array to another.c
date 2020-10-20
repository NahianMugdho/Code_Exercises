#include<stdio.h>
int main()
{
    int  i,n,a[100],b[100];
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the values : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       b[i]=a[i];
    }
    printf("Source values: ");

        for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }

    printf("\nElements of dest array are : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t", b[i]);
    }


    return 0;
}
