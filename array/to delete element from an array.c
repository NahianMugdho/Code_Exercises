#include<stdio.h>
int main()
{
    int arr[100];
    int size, pos,i;
    printf("enter the value of size: ");
    scanf("%d",&size);
    printf("enter the values : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value of position : ");
    scanf("%d",&pos);
    if(pos<0||pos>size)
    {
        printf("invalid",size);
    }
    else
    {
       for(i=pos-1;i<size-1;i++)
       {
           arr[i]=arr[i+1];
       }
        size--;
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}



