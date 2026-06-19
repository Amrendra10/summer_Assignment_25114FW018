#include <stdio.h>
int main()
{
    int a[10][10], c[10][10], row, col, i, j;
    printf("Enter num of rows and column:");
    scanf("%d%d", &row, &col);

    printf("Enter elements in matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    printf("Transpose of matrix:");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
