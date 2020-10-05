#include <stdio.h>
#define row_size 4
#define col_size 3
int main()
{
    int matrix[row_size][col_size];
    int row,col;

    printf(" Enter elements in matrix %d%d \n",row_size,col_size);

    for (row=0;row<row_size;row++)
    {
        for(col=0;col<col_size;col++)
        {
            scanf("%d",&matrix[row][col]);
        }
    }

    printf("elements are : \n");
     for(row=0; row<row_size; row++)
    {
        for(col=0; col<col_size; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;

}
