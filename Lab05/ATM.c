#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    int index;
    int amount;
} Person;

typedef struct QueueNode {
    Person person;
    struct QueueNode* next;
} QueueNode;

typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
} Queue;

void initQueue(Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

void enqueue(Queue* queue, Person person) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    newNode->person = person;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

Person dequeue(Queue* queue) {
    if (queue->front == NULL) {
        Person emptyPerson = { -1, -1 };
        return emptyPerson;
    }

    QueueNode* temp = queue->front;
    Person person = temp->person;
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return person;
}

int isEmpty(Queue* queue) {
    return (queue->front == NULL);
}

int* queueOrder(int n, int x, const int* amounts, int* resultCount) {
    Queue atmQueue;
    initQueue(&atmQueue);
    int* result = (int*)malloc(n * sizeof(int));
    *resultCount = 0;

    for (int i = 0; i < n; i++) {
        Person person = { i + 1, amounts[i] };
        enqueue(&atmQueue, person);
    }

    while (!isEmpty(&atmQueue)) {
        Person person = dequeue(&atmQueue);

        if (person.amount <= x) {
            result[(*resultCount)++] = person.index;
        } else {
            person.amount -= x;
            enqueue(&atmQueue, person);
        }
    }

    return result;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int* amounts = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &amounts[i]);
    }

    int resultCount = 0;
    int* result = queueOrder(n, x, amounts, &resultCount);

    for (int i = 0; i < resultCount; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    free(amounts);

    return 0;
}
