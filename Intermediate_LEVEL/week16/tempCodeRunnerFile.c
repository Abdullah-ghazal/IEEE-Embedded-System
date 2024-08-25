  ret = stack_pop(&stack_1, &stack_pop_value);
        if(ret)
            printf("poped value from stack = (%d)\n",stack_pop_value);
        else    
            printf("Stack becomes Empty :(\n");