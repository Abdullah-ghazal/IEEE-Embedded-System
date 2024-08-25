#include"Linked_List.h"


uint32 get_length(node_t *list)
{
    node_t* temp_node = list;
    uint32 node_count = 0;

    while (temp_node != NULL)
    {
        node_count++;
        temp_node = temp_node->node_link;
    }
    return node_count;
    
}

void insert_node_at_begin(node_t **list)
{
    node_t *temp_node = NULL; // pointer to a temporary liked list
    temp_node = (node_t *)malloc(sizeof(node_t)); // point to a place of linked list in memory
    if(temp_node != NULL)
    {
        // 1) data
        printf("Enter node data: ");
        scanf("%d",&(temp_node->node_data));

        // 2) link
        if(*list == NULL) // there is no list
        {
            temp_node->node_link=NULL;
            *list = temp_node; // list is a first list
        }
        else // there is list (not empty)
        {
            temp_node->node_link = *list;
            *list = temp_node;
        }
    }
}

void insert_node_at_end(node_t **list)
{
    node_t *temp_node = NULL; // points to temporary node
    node_t *last_node = NULL; // ppints to last node

    temp_node = (node_t*)malloc(sizeof(node_t));
    if(temp_node != NULL)
    {
        // 1) data
        printf("Enter node data: ");
        scanf("%d",&(temp_node->node_data));

        temp_node->node_link = NULL; // link of end node must point to nothing
        if(*list == NULL)
        {
            *list = temp_node;
        }
        else
        {
            last_node = *list;
            while (last_node->node_link != NULL) // traversing on list nodes
            {
                last_node = last_node->node_link;
            }
            last_node->node_link = temp_node; // list data : temp_node data
                                              // list link : null
        }   
    }
}


void insert_node_after(node_t *list)
{
    node_t *temp_node = NULL;
    node_t *node_list_counter = NULL;

    uint32 node_position = 0;
    uint32 list_length = get_length(list);
    uint32 node_counter = 1; // points to the first node

    // read the position of node will inserted
    printf("Enter the position of node will inserted");
    scanf("%d",&node_position);

    if(node_position < list_length)
    {
        // traversing till node position
        node_list_counter = list;
        while (node_counter < node_position)
        {
            node_counter++;
            node_list_counter = node_list_counter->node_link;
        }
        // create temp_node to store inserted data
        temp_node = (node_t *)malloc(sizeof(node_t));
        if(temp_node != NULL)
        {
            // 1) data
            printf("Enter the node data you need to insert: ");
            scanf("%d",&(temp_node->node_data));

            // 2) linking
            // first, connect the right side
            temp_node->node_link = node_list_counter->node_link; // to connect with the next node 
            // second, connect the lift side
            node_list_counter->node_link = temp_node;            // to connect with the previous node
        }
        
    }
    else
    {
        printf("INVALID POSITION!!!\n");
    }
}

void delete_node_at_begin(node_t **list)
{
    node_t *temp_node = *list; // 1st node in the list
    uint32 lest_length = get_length(*list);

    if(lest_length != 0)
    {
        *list = temp_node->node_link; // connect with the next (2nd) node
        temp_node->node_link = NULL;
        free(temp_node); // temp node become a free node
    }   
    else
    {
        printf("List is empty, no nodes to be deleted!!!\n");
    }
}

void delete_node(node_t *list)
{
    node_t* next_node = NULL;
    node_t *node_list_counter = NULL;

    uint32 node_position = 0;
    uint32 list_length = get_length(list);
    uint32 node_counter = 1; // points to 1st node in the list

    printf("Enter the node position you need to delete: ") ;
    scanf("%d",&node_position);

    if(node_position < list_length)
    {
        if(list_length == 1)
        {
            printf("use \"delete_node_at_begin\" \n");
        }
        else
        {
            while (node_counter < (node_position-1))
            {
                node_counter++;
                node_list_counter = node_list_counter->node_link;                
            }
            next_node = node_list_counter->node_link; // link with previous node 
            node_list_counter->node_link = next_node->node_link; // link with the node after (next_node) directly
            free(next_node);
        }
    }
    else
    {
        printf("Error, Invalide position!!!!\n");
    }
}

void display_all_nodes(node_t *list)
{
    node_t *temp_node = list;
    printf("Data of list: [");

    if(temp_node == NULL)
    {
        printf("NULL");
    }
    else
    {
        //traversing
        while (temp_node != NULL)
        {
            printf("%d->",temp_node->node_data);
            temp_node = temp_node->node_link; // traversing mechanism
        }

        // the last node
        if(temp_node == NULL)
        {
            printf("null");
        }        
    }
    printf("]\n");
}




