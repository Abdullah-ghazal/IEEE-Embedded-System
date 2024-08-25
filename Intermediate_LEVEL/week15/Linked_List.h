#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include"Platform_Types.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    uint32 node_data;
    struct node *node_link; // points to address of the next node (which be linked)
}node_t;



void insert_node_at_begin(node_t **list);
void insert_node_at_end(node_t **list);
void insert_node_after(node_t *list);
void delete_node_at_begin(node_t **list);
void delete_node(node_t *list);
void display_all_nodes(node_t *list);
uint32 get_length(node_t *list);


#endif