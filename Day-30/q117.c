#include<stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Enter roll number:");
        scanf("%d",&s[i].roll);
        printf("Enter student name:");
        scanf(" %[^\n]",s[i].name);
        printf("Enter marks:");
        scanf("%f",&s[i].marks);
    }
    printf("\n~Student Records~\n");
    for(i=0;i<n;i++)
    {
        printf("\n Student %d\n",i+1);
        printf("Roll number:%d\n",s[i].roll);
        printf("Student Name:%s\n",s[i].name);
        printf("Marks:%.2f\n",s[i].marks);
    }
    return 0;
}