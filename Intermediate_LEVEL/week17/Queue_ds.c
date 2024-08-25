#include<stdio.h>
#include<stdlib.h>
#include"Queue_ds.h"
#include "Platform_Types.h"

// helper functions
static uint8 Queue_Is_Full(Queue_t* queue_obj)
{
    return (queue_obj->Element_Count == queue_obj->Queue_Max_Size);
}

static uint8 Queue_Is_Empty(Queue_t* queue_obj)
{
    return (queue_obj->Element_Count == 0);
}

Queue_t *create_queue(uint32 maxsize, Queue_Status_t *ret_status)
{
    // check the ret_status pointer
    Queue_t *my_queue;
    if(ret_status == NULL)
    {
        *ret_status = QUEUE_NULL_PIONTER;
        my_queue = NULL;
    }
    else
    {
        // Create the queue object in the heap memory to hold the queue information
        my_queue = (Queue_t *)malloc(sizeof(my_queue));
        // check the my_queue pointer
        if(my_queue == NULL)
        {
            *ret_status = QUEUE_NULL_PIONTER;
            my_queue = NULL;
        }
        else
        {
            // Create an array of (void*) to hold the addresses of queue elements
            my_queue->Queue_Array = (void **)calloc(maxsize, sizeof(void *));
            // check Queue_Array pointer
            if((my_queue->Queue_Array ) == NULL)
            {
                *ret_status = QUEUE_NULL_PIONTER;
                my_queue = NULL;
            }
            else
            {
                // The entry of queue
                my_queue->Element_Count = 0;
                my_queue->Queue_Back = -1;
                my_queue->Queue_Front = -1;
                my_queue->Queue_Max_Size = maxsize;
                *ret_status = QUEUE_OK;
            }
        }
    }
    return my_queue;
}

Queue_Status_t Enqueue_Element(Queue_t *queue_obj, void *item_ptr)
{
    Queue_Status_t ret = QUEUE_NOK;
    if(queue_obj == NULL || item_ptr == NULL)
    {
        ret = QUEUE_NULL_PIONTER;
    }
    else
    {
        /* Validate if the queue is full or not */
        if(Queue_Is_Full(queue_obj))
        {
            ret = QUEUE_FULL; // Queue is full, i cant puch any elements
        }
        else
        {
            // increament the Queue_Back index
            (queue_obj->Queue_Back)++;
            // Queue wraps to zero-index element (adhesion point)
            if(queue_obj->Queue_Back == queue_obj->Queue_Max_Size)
            {
                queue_obj->Queue_Back = 0;
            }
            else
            {}
            // insert the input (void pointer) data to the back position
            queue_obj->Queue_Array[queue_obj->Queue_Back] = item_ptr;
          
            /*  
                check if the queue is empty or not
                if empty -> Back & Front will point to 1st element (zero index) and inc size
                else inc Back and size
            */
           if(Queue_Is_Empty(queue_obj))
           {
                queue_obj->Queue_Front = 0;
                queue_obj->Element_Count = 1;
           }
           else
           {
                queue_obj->Element_Count++;
           }
        
            ret = QUEUE_OK;
        }
    }
    return ret;
}

void *Dequeue_Element(Queue_t *queue_obj, Queue_Status_t *ret_status)
{
    void* Return_Element = NULL;
    if(queue_obj == NULL || ret_status == NULL)
    {
        *ret_status == QUEUE_NULL_PIONTER;        
    }
    else
    {
        // check if the queue is empty or not
        if(Queue_Is_Empty(queue_obj)) //queue is empty
        {
            Return_Element = NULL; // null pionter
            *ret_status = QUEUE_EMPTY;
        }
        else // queue is not empty
        {
            Return_Element = queue_obj->Queue_Array[queue_obj->Queue_Front];
            // then inc the queue_front pointer
            (queue_obj->Queue_Front)++;

            if(queue_obj->Queue_Front == queue_obj->Queue_Max_Size) // Queue front wraps to zero-index element (adhesion point)
            {
                queue_obj->Queue_Front = 0;
            }

            // check if an element is the last element in the queue
            if(queue_obj->Element_Count == 1)
            {
                queue_obj->Queue_Front = -1;
                queue_obj->Queue_Back = -1;
            }

            // decreament the number of elements 
            (queue_obj->Element_Count)--;
            *ret_status = QUEUE_OK;
                  

        }
    }

    return Return_Element;
}

void *Queue_Front(Queue_t *queue_obj, Queue_Status_t *ret_status)
{
    void* Return_Element = NULL;
    if(queue_obj == NULL || ret_status == NULL)
    {
        *ret_status == QUEUE_NULL_PIONTER;
    }
    else
    {
        // check if the queue is empty or not
        if(Queue_Is_Empty(queue_obj)) //empty
        {
            Return_Element = NULL;
            *ret_status = QUEUE_EMPTY;
        }
        else // not empty
        {
            Return_Element = queue_obj->Queue_Array[queue_obj->Queue_Front];
            *ret_status = QUEUE_OK;
        }
    }
    return Return_Element;
}

void *Queue_Back(Queue_t *queue_obj, Queue_Status_t *ret_status)
{
    void* Return_Element = NULL;
    if(queue_obj == NULL || ret_status == NULL)
    {
        *ret_status = QUEUE_NULL_PIONTER; 
    }
    else
    {
        // check if the queue is empty or not
        if(Queue_Is_Empty(queue_obj)) //empty
        {
            Return_Element = NULL;
            *ret_status = QUEUE_EMPTY;
        }
        else // not empty
        {
            Return_Element = queue_obj->Queue_Array[queue_obj->Queue_Back];
            *ret_status = QUEUE_OK;
        }
    }
    return Return_Element;
    }

Queue_Status_t Get_Queue_Count(Queue_t *queue_obj, sint32 *queue_count)
{
    Queue_Status_t ret = QUEUE_NOK;
    if(queue_obj == NULL )
    {
        ret = QUEUE_NULL_PIONTER;
    }
    else
    {
        // check if the queue is empty or not
        if(Queue_Is_Empty(queue_obj)) // empty
        {
            *queue_count = 0;
        }
        else // not empty
        {
            *queue_count = queue_obj->Element_Count;
        }
        ret = QUEUE_OK;
    }   
    return ret;
}

Queue_Status_t Destroy_Queue(Queue_t *queue_obj)
{
    Queue_Status_t ret = QUEUE_NOK;
    if(queue_obj == NULL)
    {
        ret = QUEUE_NULL_PIONTER;
    }
    else
    {
        free(queue_obj->Queue_Array); // must be 1st step
        free(queue_obj); // then be 2nd step
        ret = QUEUE_OK;
    }
    return ret;
}