#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee e[100];
    int n=0,choice,i;
    do
    {
        printf("\n~Employee Record Management System~\n");
        printf("1.Add Employee Record\n");
        printf("2.Display Employee Record\n");
        printf("3.Search Empoyee\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Employee ID: ");
            scanf("%d",&e[n].id);
            printf("Enter Employee Name: ");
            scanf("%s",e[n].name);
            printf("Enter Salary: ");
            scanf("%f",&e[n].salary);
            n++;
            break;

            case 2:
            printf("\nEmployee Records\n");
            for(i=0;i<n;i++)
            {
                printf("ID:%d\n",e[i].id);
                printf("Name:%s\n",e[i].name);
                printf("Salary:%f\n",e[i].salary);
                
            }
            break;

            case 3:
            {
                int id,found=0;

                printf("Enter Employee ID to be searched:");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("Record Found\n");
                        printf("ID:%d\n",e[i].id);
                        printf("Name:%s\n",e[i].name);
                        printf("Salary:%f\n",e[i].salary);                      
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Record Not found\n");
                    break;
                }
            }
            case 4:
            printf("Exiting\n");
            break;

            default:
            printf("Invalid Choice\n");
        }
    } while (choice!=4);
    return 0;
        
}