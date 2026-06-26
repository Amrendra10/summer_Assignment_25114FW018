#include<stdio.h>
void main()
{
    int choice;
    float balance=10000,amount;

    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Balance= %.2f",balance);
    }
    else if(choice==2)
    {
        printf("Enter amount:");
        scanf("%f",&amount);
        balance=balance+amount;
        printf("New balance= %.2f",balance);
    }
    else if(choice==3)
    {
        printf("Enter amount:");
        scanf("%f",&amount);
        
        if(amount<=balance)
        {
            balance=balance-amount;
            printf("New balance= %.2f",balance);
        }
        else
        {
            printf("Insufficient balance");
        }
    }
    else{
        printf("Invalid choice");
    }
    
}