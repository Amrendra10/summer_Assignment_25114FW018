#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
struct Student s[100];
int n;
void addStudent()
{
    int i;
    printf("Enter number of students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter roll number:");
        scanf("%d", &s[i].roll);
        printf("Enter student name:");
        scanf(" %[^\n]", s[i].name);
        printf("Enter marks:");
        scanf("%f", &s[i].marks);
    }
}
void displayStudent()
{
    int i;
    printf("\n~Student Records~\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll number:%d\n", s[i].roll);
        printf("Student Name:%s\n", s[i].name);
        printf("Marks:%.2f\n", s[i].marks);
    }
}
void searchStudent()
{
    int r, i, found = 0;
    printf("Enter roll number to be searched:");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (s[i].roll == r)
        {
            printf("Record Found\n");
            printf("Roll Number:%d\n", s[i].roll);
            printf("Name:%s\n", s[i].name);
            printf("Marks:%f\n", s[i].marks);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Record Not found\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n~Student Record Management System~\n");
        printf("1.Add Student \n");
        printf("2.Display Student \n");
        printf("3.Search Student \n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudent();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("Thank You");
            break;

        default:
            printf("Invalid choice");
        }
    } while (choice != 4);
    return 0;
}