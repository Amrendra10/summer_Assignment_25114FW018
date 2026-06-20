#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], row1, col1, row2, col2, i, j ,k ;
    printf("Enter num of rows and column of first matrix:");
    scanf("%d%d", &row1, &col1);

    printf("Enter elements in first matrix:");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row and column of second matrix:");
    scanf("%d%d",&row2,&col2);

    printf("Enter elements in second matrix:");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(col1!=row2)
    {
        printf("Matrix multiplication not possible:");
        return 0;
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            c[i][j]=0;
            for(k=0;k<col1;k++)
            {
                c[i][j] +=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of matrix:");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}