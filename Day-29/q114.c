#include<stdio.h>
int main()
{
    int arr[100],n,i,choice,sum=0,max,min;

    printf("Enter num of element:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    do
    {
        printf("\n~MENU~\n");
        printf("1.Display array\n");
        printf("2.Sum of elements\n");
        printf("3.Find Maximum\n");
        printf("4.Find Minimum\n");
        printf("5.Exiting\n");
        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Array elements are:");
            for(i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;

            case 2:
            sum=0;
            for(i=0;i<n;i++)
            {
                sum+=arr[i];
            }
                printf("Sum:%d\n",sum);
            
            break;

            case 3:
            max=arr[0];
            for(i=1;i<n;i++)
            {
                if(max<arr[i])
                {
                    max=arr[i];
                }
                    printf("Maximum:%d\n",max);
                
            }
            break;

            case 4:
            min=arr[0];
            for(i=1;i<n;i++)
            {
                if(min>arr[i])
                {
                    min=arr[i];
                }
                    printf("Minimum:%d\n",min);
                
            }
            break;
            case 5:
            printf("Exiting\n");
            break;

            default:
            printf("Invalid choice");
        }
    } while (choice!=5);
    return 0;
    
}