#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], row, col, i, j;
    printf("Enter num of rows and column:");
    scanf("%d%d", &row, &col);

    printf("Enter elements in first matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements in second matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Addition of two matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}