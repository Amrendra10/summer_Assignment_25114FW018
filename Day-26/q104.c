#include<stdio.h>
int main()
{
    int ans,score=0;

    printf("Q1. What is the currency of India?\n");
    printf("1.Dollar\n2.Euro\n3.Rupees\n4.Taka\n");
    scanf("%d",&ans);

    if(ans==3)
    score++;

    printf("Q2. 2+3=?\n");
    printf("1.6\n2.1\n3.4\n4.5\n");
    scanf("%d",&ans);

    if(ans==4)
    score++;

    printf("Your score = %d ", score);
    return 0;
}