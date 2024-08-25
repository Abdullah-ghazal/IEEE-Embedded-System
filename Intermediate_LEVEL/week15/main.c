#include<stdio.h>
#include"Linked_List.c"
node_t *list_head = NULL;   // pointer to the 1st node of the linked list (represent the linked list)

int main(int argc, char const *argv[])
{
    uint8 choice = 0; // one decimal value (1 - 8)
    uint32 list_length = 0;

    printf("Hello to the single list: \n");
    while (1)
    {
        printf("\n");
        printf("=========================================\n");
        printf("-> 1) insert node at begin:\n");
        printf("-> 2) insert node at end:\n");
        printf("-> 3) insert node after:\n");
        printf("-> 4) delete node at begin:\n");
        printf("-> 5) delete node:\n");
        printf("-> 6) display all nodes:\n");
        printf("-> 7) get length:\n");
        printf("-> 8) Quit from Linked list:\n");
        printf("=========================================\n\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            {
                insert_node_at_begin(&list_head);
                break;
            }
            case 2:
            {
                insert_node_at_end(&list_head);
                break;
            }
            case 3:
            {
                insert_node_after(list_head);
                break;
            }
            case 4:
            {
                delete_node_at_begin(&list_head);
                break;
            }
            case 5:
            {
                delete_node(list_head);
                break;
            }
            case 6:
            {
                display_all_nodes(list_head);
                break;
            }
            case 7:
            {
                list_length = get_length(list_head);
                printf("The length of Linked List = %d\n",list_length);
                break;
            }
            case 8:
            {
                printf("Quit !!!\n");
                exit(1);
                break;
            }
            default:
            {
                printf("Uncorrect Choice -_-\n");
                break;
            }

        }

    }
    
    return 0;
}
