#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5

struct Queue
{
    int front, rear;
    int items[MAX_QUEUE_SIZE];
};

void initializeQueue(struct Queue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

int isQueueFull(struct Queue *queue)
{
    return (queue->rear == MAX_QUEUE_SIZE - 1);
}

int isQueueEmpty(struct Queue *queue)
{
    return (queue->front == -1);
}

void enqueue(struct Queue *queue, int item)
{
    if (isQueueFull(queue))
    {
        printf("Queue is full. Cannot enqueue %d\n", item);
    }
    else
    {
        if (isQueueEmpty(queue))
        {
            queue->front = 0;
        }
        queue->rear++;
        queue->items[queue->rear] = item;
        printf("%d enqueued to the queue\n", item);
    }
}

void dequeue(struct Queue *queue)
{
    if (isQueueEmpty(queue))
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else
    {
        int dequeuedItem = queue->items[queue->front];
        printf("%d dequeued from the queue\n", dequeuedItem);

        if (queue->front == queue->rear)
        {
            // Queue is now empty
            initializeQueue(queue);
        }
        else
        {
            queue->front++;
        }
    }
}

void displayQueue(struct Queue *queue)
{
    if (isQueueEmpty(queue))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = queue->front; i <= queue->rear; i++)
        {
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct Queue myQueue;
    initializeQueue(&myQueue);

    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);
    displayQueue(&myQueue);

    dequeue(&myQueue);
    displayQueue(&myQueue);

    enqueue(&myQueue, 40);
    enqueue(&myQueue, 50);
    enqueue(&myQueue, 60); // This will exceed the maximum queue size
    displayQueue(&myQueue);

    return 0;
}
