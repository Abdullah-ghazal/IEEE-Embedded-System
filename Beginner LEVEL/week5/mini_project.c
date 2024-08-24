#include <stdio.h>
#include <stdlib.h>
#define MAX_ITEMS 10 // index of arrays
typedef enum         // to define boolean values
{
    false = 0,
    true = 1
} bool;

void market(void); // declaration of function

char item[MAX_ITEMS][50]; // item name
static int shipping_cost = 0;
bool overnight_shipping[MAX_ITEMS];
int items_count = 0; // number of items
float item_price[MAX_ITEMS];
float total_price = 0;

int main(int argc, char const *argv[])
{

    market(); // calling of function
    return 0;
}

void market(void)
{
    while (1) // always looping
    {
        printf("Enter the item : ");
        scanf("%s", item[items_count]);
        printf("Enter the price of an item : ");
        scanf("%f", &item_price[items_count]);
        printf("Do you need overnight delivery (5$) ? <<if yes Enter(1), else Enter(o)>> : ");
        scanf("%d", &overnight_shipping[items_count]);

        total_price += item_price[items_count];
        items_count++; // increase the index of item by 1

        char choice; //=> yes (y) or no (n)
        printf("Continue shopping? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N')
        {
            if (items_count <= 2) //check if number of items is less than 2
                printf("No order for 2 item or less !!");
            else
                break;
            //check if it's needed an overnight shipping 
            for (int i = 0; i < items_count; i++)
            {
                if (overnight_shipping[i])
                {
                    shipping_cost += 5;
                    break;
                }
            }
            //check if number of items is more than 5
            if (items_count > 5)
            {
                total_price *= 0.8; // 20% discount
            }
        }
    }
    // check if price of each item is less or more than 10$
    for (int i = 0; i < items_count; i++)
    {
        if (item_price[items_count] < 10)
            shipping_cost += 2;
        else
            shipping_cost += 3;
    }
    //print the final bill :)
    printf(" >>>>>>>>>>>  BILL  <<<<<<<<<<<\n");
    for (int i = 0; i < items_count; i++)
    {
        printf("item[%i] (%s) = %.2f$\n", i, item[i], item_price[i]);
    }

    printf("shipping cost = %i$\n", shipping_cost);
    printf("Total price = %.2f$\n", total_price);
}