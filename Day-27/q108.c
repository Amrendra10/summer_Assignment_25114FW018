#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float m1, m2, m3;
    float total, per;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s.m1);
    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s.m2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.per = s.total / 3;

    printf("\n~MARKSHEET~\n");
    printf("Roll No:%d\n", s.roll);
    printf("Name:%s\n", s.name);
    printf("Total Marks:%.2f\n", s.total);
    printf("Percentage:%.2f%%\n", s.per);

    if (s.per >= 40)
        printf("Result:PASS\n");
    else
        printf("Result:FAIL\n");

    return 0;
}