#include<stdio.h>
#include<stdlib.h>

#include"stack_ds.h"

/*
    /////help funcions\\\\\\
    static => (must be hidden from user)
*/
// @brief -> check the stack is full or not 
//        -> is static function 
// @param my_stack -> is a pionter to stack
// @retval status of the stack (is full or not full)
static stack_status_t stack_full(stack_ds_t *my_stack)
{
    if(my_stack->stack_pionter == MAX_SIZE-1)   
    {
        return STACK_FULL;
    }
    else
    {
        return STACK_NOT_FULL;
    }
}

// @brief -> check the stack is empty or not
//        -> is static function 
// @param my_stack -> is a pionter to stack
// @retval status of the stack (is empty or not full)
static stack_status_t stack_empty(stack_ds_t *my_stack)
{
    if(my_stack->stack_pionter == -1)
    {
        return STACK_EMPTY;
    }
    else
    {
        return STACK_NOT_FULL;  
    }
}

// @brief pushing a new value in the stack 
// @param my_stack -> is a pionter to stack
// @retval status of stack push
return_status_t stack_push(stack_ds_t* my_stack, uint32_t value)
{
    return_status_t ret = R_NOK;
    if( (my_stack == NULL)||(stack_full(my_stack) == STACK_FULL)) // ckeck null pointer or full stack
    {
        #ifdef STACK_DEBUG
        printf("Stack is FULL !!!\n");
        #endif
        ret = R_NOK;
    }
    else
    {
        my_stack->stack_pionter++; //pointer increament
        my_stack->data[my_stack->stack_pionter] = value; // assign a new value
        #ifdef STACK_DEBUG // debugging mechanism
        printf("Push value (%d) to stack\n",value);
        #endif
        ret = R_OK;
    }
    return ret;
}
// @brief remove and get the top element in the stack
// @param my_stack -> is a pionter to stack
// @param value -> is a pionter to varible will assign the poped value
// @retval status of stack pop
return_status_t stack_pop(stack_ds_t* my_stack, uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((my_stack == NULL) || (value == NULL) || (stack_empty(my_stack) == STACK_EMPTY))
    {
        
        ret = R_NOK;
    }
    else
    {
        *value = my_stack->data[my_stack->stack_pionter];
        my_stack->stack_pionter--;
        #ifdef STACK_DEBUG
        printf("pop value (%d) from the stack\n",*value);
        #endif
        ret=R_OK;
    }
    return ret;    
}
// @brief getting the top element in the stack
// @param my_stack -> is a pionter to stack
// @param value -> is a pionter to value will assigned as a top
// @retval status of stack top
return_status_t stack_top(stack_ds_t* my_stack, uint32_t *value)
{
    return_status_t ret = R_NOK;
    if((my_stack == NULL) || (value == NULL) || (stack_empty(my_stack) == STACK_EMPTY))
    {
        #ifdef STACK_DEBUG
        printf("Stack is Empty!!!\n");
        #endif
        ret = R_NOK;
    }
    else
    {
        *value = my_stack->data[my_stack->stack_pionter];
        #ifdef STACK_DEBUG
        printf("Top value is (%d)\n",my_stack->data[my_stack->stack_pionter]);
        #endif
        ret = R_OK;
    }
    return ret;    
}
// @brief getting the number of stack elements
// @param my_stack -> is a pionter to stack
// @param size_of_stack -> is a pionter to size of stack
// @retval status of stack size
return_status_t stack_size(stack_ds_t *my_stack, uint32_t *size_of_stack)
{
    return_status_t ret = R_NOK;

    if((my_stack == NULL) || (size_of_stack == NULL))
    {
        ret = R_NOK;
    }
    else
    {
        *size_of_stack = my_stack->stack_pionter + 1;
        #ifdef STACK_DEBUG
        printf("Stack size = %d\n",*size_of_stack);
        #endif
        ret = R_OK;
    }
    return ret;
}
// @brief displaying the elements of the stack
// @param my_stack -> is a pionter to stack
// @retval status of stack display
return_status_t stack_display(stack_ds_t *my_stack)
{
    return_status_t ret = R_NOK;
    sint32_t counter = ZERO_INIT;
    if((my_stack == NULL) || (stack_empty(my_stack) == STACK_EMPTY))
    {
        #ifdef STACK_DEBUG
        printf("Stack is Empty!!!\n");
        #endif
        ret = R_NOK;
    }
    else
    {
        printf("Stack data : [");
        for(counter = my_stack->stack_pionter ; counter >= ZERO ; counter--)
        {
            printf("%d, ",my_stack->data[counter]);
        }
        printf("]\n");
        ret = R_OK;
    }
    return ret;
}










//  @brief ititialize the stack pointer
//  @param my_stack pointer to stack (called by reference)
//  @retval status of stack initialization 
return_status_t stack_init(stack_ds_t* my_stack)
{
     return_status_t ret = R_NOK;
     if(my_stack == NULL) // if (my_stack) is piont to nothing
     {
        ret = R_NOK;
     }
     else
     {
        my_stack->stack_pionter = -1; // (my_stack) is piont to Entry of the stack
        ret = R_OK;
     }
     return ret;
}
