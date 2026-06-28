#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t[100];
    int n = 0,choice,i,no,found;

    do
    {
        printf("\n~Ticket Booking System~\n");
        printf("1.Book Ticket\n");
        printf("2.Display Tickets\n");
        printf("3.Search Ticket\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d",&t[n].ticketNo);

                printf("Enter Passenger Name: ");
                scanf("%s",t[n].name);

                printf("Enter Number of Seats: ");
                scanf("%d",&t[n].seats);

                n++;
                printf("Ticket Booked Successfully\n");
                break;

            case 2:
                printf("\nBooked Tickets:\n");
                for(i = 0; i < n; i++)
                {
                    printf("Ticket No:%d\n",t[i].ticketNo);
                    printf("Passenger:%s\n",t[i].name);
                    printf("Seats:%d\n\n",t[i].seats);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Ticket Number to Search: ");
                scanf("%d",&no);

                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == no)
                    {
                        printf("\nTicket Found\n");
                        printf("Ticket No:%d\n",t[i].ticketNo);
                        printf("Passenger:%s\n",t[i].name);
                        printf("Seats:%d\n",t[i].seats);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Ticket Not Found\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while(choice!= 4);
    return 0;
}