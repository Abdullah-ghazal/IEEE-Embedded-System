#include<stdio.h>
#include<stdlib.h>
#include "Queue_ds.c"
#include "Queue_ds.h"
#include "Platform_Types.h"


    uint32 Queue1_Max_Element = 0;
    Queue_t *Queue1;
    Queue_Status_t ret;
    Queue_Status_t *ret_d;
    void* Queue_retval = 0;
    sint32 Queue1_count = 0;


  

int main()
{
    /*=================== Testing ==========================*/
    Queue_Status_t Return_Queue_Status = QUEUE_OK;

    // get the size of queue
    printf("Enter the Number of Elements: ");
    scanf("%d",&Queue1_Max_Element);

    // Create the queue
    printf("===================== queue Creation =========================\n");
    Queue1 = create_queue(Queue1_Max_Element, &Return_Queue_Status);
    printf("Address of the Queue object in heap memory: 0x%x\n",Queue1);

    printf("===================== Basic operations of the queue =========================\n");
    // Adding elements
    ret = Enqueue_Element(Queue1, (uint32*)(11));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(22));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(33));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(44));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(55));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(66));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(77));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    printf("================ Test (1) =====================\n");
    // print Front & back element
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);
    printf("================ Test (2) =====================\n");
    // Deque Element from the queue
    Dequeue_Element(Queue1, &Return_Queue_Status);
    if(Return_Queue_Status == QUEUE_EMPTY ) printf("Queue become Empty!!!\n");
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);
    printf("================ Test (3) =====================\n");
    // Deque all Elements from the queue
    Dequeue_Element(Queue1, &Return_Queue_Status);
    if(Return_Queue_Status == QUEUE_EMPTY ) printf("Queue become Empty!!!\n");
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);

    Dequeue_Element(Queue1, &Return_Queue_Status);
    if(Return_Queue_Status == QUEUE_EMPTY ) printf("Queue become Empty!!!\n");
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);

    Dequeue_Element(Queue1, &Return_Queue_Status);
    if(Return_Queue_Status == QUEUE_EMPTY ) printf("Queue become Empty!!!\n");
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);

    Dequeue_Element(Queue1, &Return_Queue_Status);
    if(Return_Queue_Status == QUEUE_EMPTY ) printf("Queue become Empty!!!\n");
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);

    Dequeue_Element(Queue1, &Return_Queue_Status);
    if(Return_Queue_Status == QUEUE_EMPTY ) printf("Queue become Empty!!!\n");
    Queue_retval = Queue_Back(Queue1,&Return_Queue_Status);
    printf("Back Element: %d\n",Queue_retval);
    Queue_retval = Queue_Front(Queue1,&Return_Queue_Status);
    printf("Front Element: %d\n",Queue_retval);

    printf("================ Test (4) =====================\n");
    ret = Enqueue_Element(Queue1, (uint32*)(11));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(22));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(33));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(44));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(55));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(66));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    ret = Enqueue_Element(Queue1, (uint32*)(77));
    if(ret == QUEUE_FULL) printf("There is no space!!!\n");
    // get the number of queue elements
    Get_Queue_Count(Queue1, &Queue1_count);
    printf("Count of Elements: %d\n", Queue1_count);

    printf("================ Test (5) =====================\n");
    // destroy the queue
    Destroy_Queue(Queue1);
    Get_Queue_Count(Queue1, &Queue1_count);
    printf("Count of Elements: %d\n", Queue1_count);
    

    





    return 0;
}


    