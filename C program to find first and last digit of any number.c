#include<stdio.h>
int main()
{
    int fir,las,n;
    printf("enter the input value : ");
    scanf("%d",&n);
    las=n%10;
    printf("last value is %d\n",las);
    fir=n;
    while(fir>=10)
    {
        fir=fir/10;
    }
    printf("The first value %d\n",fir);
    return 0;
}
