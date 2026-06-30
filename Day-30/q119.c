#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};
int main()
{
    struct employee e[100];
    int n,i;
    printf("Enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEmployee%d\n",i+1);
        printf("Enter Employee id:");
        scanf("%d",&e[i].id);
        printf("Enter Employee name:");
        scanf(" %[^\n]",e[i].name);
        printf("Enter department:");
        scanf(" %[^\n]",e[i].department);
        printf("Enter Salary:");
        scanf("%f",&e[i].salary);
    }
    printf("\n~Employee Records~\n");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee%d\n",i+1);
        printf("Employee ID:%d\n",e[i].id);
        printf("Name:%s\n",e[i].name);
        printf("Department:%s\n",e[i].department);
        printf("Salary:%.2f\n",e[i].salary);
    }
    return 0;
}