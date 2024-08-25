#ifndef _QUEUE_DS_H
#define _QUEUE_DS_H

#include "Platform_Types.h"

typedef struct
{
    void **Queue_Array;    // pionter to array of void pointers
    uint32 Queue_Max_Size; // Maximum elements in the Queue
    sint32 Element_Count;  // Number of elements in the Queue
    sint32 Queue_Front;    // index of the front element
    sint32 Queue_Back;     // index of the back element
}Queue_t;

typedef enum
{
    QUEUE_NOK,
    QUEUE_OK,
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_PIONTER
}Queue_Status_t;

Queue_t *create_queue(uint32 maxsize, Queue_Status_t *ret_status);
Queue_Status_t Enqueue_Element(Queue_t *queue_obj, void *item_ptr);
void *Dequeue_Element(Queue_t *queue_obj, Queue_Status_t *ret_status);
void *Queue_Front(Queue_t *queue_obj, Queue_Status_t *ret_status);
void *Queue_Back(Queue_t *queue_obj, Queue_Status_t *ret_status);
Queue_Status_t Get_Queue_Count(Queue_t *queue_obj, sint32 *queue_count);
Queue_Status_t Destroy_Queue(Queue_t *queue_obj);





#endif