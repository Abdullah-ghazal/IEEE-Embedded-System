#ifndef _STACK_DS_H
#define _STACK_DS_H

#include "std_types.h"

#define MAX_SIZE 5
#define STACK_DEBUG // to control in debugging mechanism

typedef struct stack_ds
{
    uint32_t stack_pionter; // pionter of stack elements
    uint32_t data[MAX_SIZE]; // array of stack elements

}stack_ds_t;

// status of the stack 
typedef enum stack_status
{
    STACK_EMPTY,
    STACK_FULL,
    STACK_NOT_FULL

}stack_status_t;

//  @brief ititialize the stack pointer
//  @param my_stack pointer to stack (called by reference)
//  @retval status of stack initialization 
return_status_t stack_init(stack_ds_t* my_stack);

////////////////The Main Function of stack \\\\\\\\\\\\\\\\\\\\\\

// @brief pushing a new value in the stack 
// @param my_stack -> is a pionter to stack
// @retval status of stack push
return_status_t stack_push(stack_ds_t* my_stack, uint32_t value);

// @brief remove and get the top element in the stack
// @param my_stack -> is a pionter to stack
// @param value -> is a pionter to varible will assign the poped value
// @retval status of stack pop
return_status_t stack_pop(stack_ds_t* my_stack, uint32_t *value);

// @brief getting the top element in the stack
// @param my_stack -> is a pionter to stack
// @param value -> is a pionter to value will assigned as a top
// @retval status of stack top
return_status_t stack_top(stack_ds_t* my_stack, uint32_t *value);

// @brief getting the number of stack elements
// @param my_stack -> is a pionter to stack
// @param size_of_stack -> is a pionter to size of stack
// @retval status of stack size
return_status_t stack_size(stack_ds_t *my_stack, uint32_t *size_of_stack);

// @brief displaying the elements of the stack
// @param my_stack -> is a pionter to stack
// @retval status of stack display
return_status_t stack_display(stack_ds_t *my_stack);



#endif