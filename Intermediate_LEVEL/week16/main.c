#include<stdio.h>
#include<stdlib.h>

#include"stack_ds.h"
#include"stack_ds.c"


stack_ds_t stack_1;


uint32_t stack_pop_value = ZERO_INIT;
uint32_t stack_top_value = ZERO_INIT;
uint32_t stack_size_value = ZERO_INIT;

int main(int argc, char const *argv[])
{
    return_status_t ret = R_NOK;
    ret = stack_init(&stack_1);
    if(ret == R_NOK)
    {   
        printf("Failed initialization of stack(1)!!\n");
    }
    else
    {
        printf("=============== Pushing Values ================\n");
        ret = stack_push(&stack_1 , 11);
        ret = stack_push(&stack_1 , 22);
        ret = stack_push(&stack_1 , 33);
        ret = stack_push(&stack_1 , 44);
        ret = stack_push(&stack_1 , 55);
        ret = stack_push(&stack_1 , 66); // failed (over flow)
        ret = stack_push(&stack_1 , 77); // failed (over flow)
        //==================================================
        printf("=============== printing stack ================\n");
        ret = stack_display(&stack_1);

        //==================================================
        printf("=============== printing the size of stack ================\n");
        ret = stack_size(&stack_1, &stack_size_value);
        //==================================================
        printf("=============== printing the Top of stack ================\n");
        ret = stack_top(&stack_1, &stack_top_value);
        //==================================================
        printf("=============== poping elements from the stack ================\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");
        //==================================================
        printf("=============== printing the Top of stack ================\n");
        ret = stack_top(&stack_1, &stack_top_value);
        //==================================================
        printf("=============== Adding an element to the stack ================\n");
        stack_push(&stack_1, 100);

        //==================================================
        printf("=============== printing the Top of stack ================\n");
        ret = stack_top(&stack_1, &stack_top_value);

       
    }
   
  return 0;
}
