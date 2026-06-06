#include<stdio.h>
int main()
{
    int bin,dec=0,base=1,r;
    printf("Enter a binary number:");
    scanf("%d",&bin);
    while(bin!=0)
    {
        r= bin%10;
        dec=dec+r*base;
        base=base*2;
        bin=bin/10;
    }
    printf("Decimal number=%d",dec);
    return 0;
}