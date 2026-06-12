#include<stdio.h>
int palindrome(int n)
{
    int temp,r,rev=0;
    temp=n;
    while(temp!=0)
    {
    r=temp%10;
    rev=rev*10+r;
    temp=temp/10;
    }
    return rev;
}
int main()
{
    int n,rev;
    scanf("%d",&n);
    rev=palindrome(n);
    if(n==rev)
    printf("Palindrome number");
    else
    printf("Not a palindrome number");

    return 0;

}