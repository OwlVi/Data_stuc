#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;            
    struct Node* next;   
}Node;

typedef struct Header {
    int count;                
    struct Node* firstNode;   
    struct Node* lastNode;    
}Header;

int main() {
    Header *head = (Header*)malloc(sizeof(Header));
    Node *firstNode = (Node*)malloc(sizeof(Node));
    Node *lastNode = (Node*)malloc(sizeof(Node));


    head->count=0;
    head->firstNode = firstNode;
    head->lastNode = lastNode;

    firstNode->data = 1;
    firstNode->next = lastNode;

    lastNode->data = 2;
    lastNode->next = NULL;

    Node *current = head->firstNode;

    while ( current != NULL)
    {
        head->count++;
        current = current->next;
    }
    
    printf("%d",head->count);
    
}
