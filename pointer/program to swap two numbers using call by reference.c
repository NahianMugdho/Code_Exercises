#include<stdio.h>
void swap(int *num1, int *num2);

void swap (int *num1, int *num2)
           {
               int temp;
               temp= *num1;
               *num1 = *num2;
               *num2 = temp;

               printf("After swapping in swap function n");
                printf("Value of num1 = %d \n", *num1);
                    printf("Value of num2 = %d \n\n", *num2);
           }

int main()
{
    int num1,num2;
    printf("enter two numbbers :");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    /* Pass the addresses of num1 and num2 */
    swap(&num1, &num2);

    /* Print the swapped values of num1 and num2 */
    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}
