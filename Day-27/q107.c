#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic,salary,hra,da;
};
int main()
{
    struct Employee e[100];
    int n=0,choice,i;
    do
    {
        printf("\n~Employee Record Management System~\n");
        printf("1.Add Employee\n");
        printf("2.Display Employee salary\n");
        printf("3.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Employee ID: ");
            scanf("%d",&e[n].id);
            printf("Enter Employee Name: ");
            scanf("%s",e[n].name);
            printf("Enter Basic Salary: ");
            scanf("%f",&e[n].basic);
            printf("Enter HRA: ");
            scanf("%f",&e[n].hra);
            printf("Enter DA: ");
            scanf("%f",&e[n].da);
            e[n].salary=e[n].basic+e[n].hra+e[n].da;
            n++;
            break;

            case 2:
            printf("\nEmployee Salary Details\n");
            for(i=0;i<n;i++)
            {
                printf("ID:%d\n",e[i].id);
                printf("Name:%s\n",e[i].name);
                printf("Total Salary:%f\n",e[i].salary);      
            }
            break;
            
            case 3:
            printf("Exiting\n");
            break;

            default:
            printf("Invalid Choice\n");
        }
    } while (choice!=3);
    return 0;
        
}