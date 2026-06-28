#include <stdio.h>

struct Bank
{
    int accNum;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n =0,choice,acc,i,found;
    float amount;

    do
    {
        printf("\n~ Bank Account Management System~\n");
        printf("1 Create Account\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Display Account\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d",&b[n].accNum);
                printf("Enter Account Holder Name: ");
                scanf("%s",b[n].name);
                printf("Enter Initial Balance: ");
                scanf("%f",&b[n].balance);
                n++;
                break;

            case 2:
                found = 0;
                printf("Enter Account Number: ");
                scanf("%d", &acc);
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                for(i=0;i<n;i++)
                {
                    if(b[i].accNum==acc)
                    {
                        b[i].balance += amount;
                        printf("Amount Deposited Successfully\n");
                        found = 1;
                        break;
                    }
                }

                if(found==0)
                    printf("Account Not Found!\n");
                    break;

            case 3:
                found=0;
                printf("Enter Account Number: ");
                scanf("%d",&acc);

                printf("Enter Withdrawal Amount: ");
                scanf("%f",&amount);

                for(i=0;i<n;i++)
                {
                    if(b[i].accNum==acc)
                    {
                        if(amount<=b[i].balance)
                        {
                            b[i].balance -= amount;
                            printf("Withdrawal Successful\n");
                        }
                        else
                        {
                            printf("Insufficient Balance.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");
                    break;

            case 4:
                printf("\nAccount Details:\n");
                for(i=0;i<n;i++)
                {
                    printf("Account No:%d\n",b[i].accNum);
                    printf("Name:%s\n",b[i].name);
                    printf("Balance:%.2f\n",b[i].balance);
                }
                break;

            case 5:
                printf("Exiting..\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}