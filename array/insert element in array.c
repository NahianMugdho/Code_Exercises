#include<stdio.h>
int main()
{
    int arr[100];
    int size, num,pos,i;
    printf("enter the value of size: ");
    scanf("%d",&size);
    printf("enter the values : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value of inserted value :");
    scanf("%d",&num);
    printf("enter the value of position : ");
    scanf("%d",&pos);
    for(i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    size++;
    printf("array after inserting: ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }



}
