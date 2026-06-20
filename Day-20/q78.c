#include <stdio.h>
int main()
{
    int a[10][10], c[10][10], row, col, i, j;
    printf("Enter num of rows and column:");
    scanf("%d%d", &row, &col);
    if(row!=col)
    {
        printf("Not a symmetric matrix:");
        return 0;
    }

    printf("Enter elements in matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                printf("Not symmetric matrix");
                return 0;
            }
        }
    }
    printf("Symmetric matrix");
    return 0;
}
