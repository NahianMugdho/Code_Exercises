#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;

    printf("value of number : %d\n", x);
    printf("address of number : %p\n",&x);

    printf("value of ptr : %x\n",ptr);
    printf("address of ptr : %x\n",&ptr);
    printf("value printed by ptr : %d\n",*ptr);

   x =20;
    printf("value of number changed \n");
    printf("value of num = %d\n",x);
    printf("value printed by ptr = %d\n",*ptr);


    *ptr=10000;
    printf("value of number changed \n");
    printf("value of num = %d\n",x);
    printf("value printed by ptr = %d\n",*ptr);
    return 0;

}
