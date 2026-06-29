#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Item %d\n", i + 1);
        printf("Item ID: ");
        scanf("%d", &item[i].id);
        printf("Item Name: ");
        scanf("%s", item[i].name);
        printf("Quantity: ");
        scanf("%d", &item[i].quantity);
        printf("Price: ");
        scanf("%f", &item[i].price);
    }
    printf("\n~ Inventory Details~\n");
    printf("ID\tName\tQuantity\tPrice\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n",
               item[i].id,
               item[i].name,
               item[i].quantity,
               item[i].price);
    }

    return 0;
}