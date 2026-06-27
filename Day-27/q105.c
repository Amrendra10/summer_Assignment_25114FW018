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
    int n=0,choice,i;
    do
    {
        printf("\n~Student Record Management System~\n");
        printf("1.Add Student Record\n");
        printf("2.Display Student Record\n");
        printf("3.Search Student By Roll Number\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter roll number: ");
            scanf("%d",&s[n].roll);
            printf("Enter Student Name: ");
            scanf("%s",s[n].name);
            printf("Enter marks: ");
            scanf("%f",&s[n].marks);
            n++;
            break;

            case 2:
            printf("\nStudent Records\n");
            for(i=0;i<n;i++)
            {
                printf("Roll Number:%d\n",s[i].roll);
                printf("Name:%s\n",s[i].name);
                printf("Marks:%f\n",s[i].marks);
                
            }
            break;

            case 3:
            {
                int r,found=0;

                printf("Enter roll number to be searched:");
                scanf("%d",&r);

                for(i=0;i<n;i++)
                {
                    if(s[i].roll==r)
                    {
                        printf("Record Found\n");
                        printf("Roll Number:%d\n",s[i].roll);
                        printf("Name:%s\n",s[i].name);
                        printf("Marks:%f\n",s[i].marks);
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