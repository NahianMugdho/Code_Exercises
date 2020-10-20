#include<stdio.h>
#define Size 5
int main()
{
    int arr[Size]={10,11,12,13,14,15};
    int *ptr= &arr[0];
    printf("accessing array elements using pointer");
    while (ptr<&arr[Size])
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    return 0;
}
