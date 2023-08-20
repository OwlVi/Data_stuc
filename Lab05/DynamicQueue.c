#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void enqueue(Queue* queue, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }

    queue->rear->next = newNode;
    queue->rear = newNode;
}

void dequeue(Queue* queue) {
    if (queue->front == NULL) {
        return;
    }
    
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

}

void firstQueue(Queue* queue) {
    if (queue->front != NULL) {
        printf("%d\n", queue->front->value);
    } else {
        printf("EMPTY\n");
    }
}

void count(Queue* queue) {
    int temp = 0;
    Node* current = queue->front;
    while (current != NULL) {
        temp++;
        current = current->next;
    }
    printf("%d\n", temp);
}

int main() {
    int n, input, value;
    scanf("%d", &n);

    Queue* queue = createQueue();

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input == 1) {
            scanf("%d", &value);
            enqueue(queue, value);
        } else if (input == 2) {
            dequeue(queue);
        } else if (input == 3) {
            firstQueue(queue);
        } else if (input == 4) {
            count(queue);
        }
    }

    free(queue);

}
