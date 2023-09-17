#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


struct node {
    char name[100]; // for file or folder name
    int size; // for file or folder size in kb
    int type; // e.g. type=0 for file, or type=1 for folder
    int total_size; // for the total size of the directory
    struct node* parent; // for link to the node’s parent
    struct node* firstChild; // for link to the node’s first child
    struct node* nextSibling; // for link to the node’s next sibling
};
struct node* createRoot(char name[],int size,int type)
{
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
    // Assign key to this node
    strcpy(node->name, name); 
    // Initialize parent
    node->parent = NULL;
    // Initialize left child, and right sibling as NULL
    node->firstChild = NULL;
    node->nextSibling = NULL;
    // Initialize size and type
    node->size = size;
    node->type = type;
    // Initialize total size
    node->total_size = 0;
    return node;
}

struct node* createNode(char name[], int size, int type, struct node* parent) {
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
    // Assign key to this node
    strcpy(node->name, name); 
    // Initialize size
    node->size = size;
    // Initialize type
    node->type = type;
    // Initialize total size
    node->total_size = 0;
    // Initialize parent
    node->parent = parent;
    // Initialize left child, and right sibling as NULL
    node->firstChild = NULL;
    node->nextSibling = NULL;
    // Set this node as a child to its parent
    if(node->parent != NULL) {
        if(node->parent->firstChild != NULL) {
            struct node* child = node->parent->firstChild;
            while(child->nextSibling != NULL) {
                child = child->nextSibling;
            }
            child->nextSibling = node;
        }
        else {
            node->parent->firstChild = node;
        }
    }
    return node;
}
// 2
void calculateTotalSize(struct node* currentNode) {
    if (currentNode == NULL) {
        return;
    }
    
    // Call Self to get Child
    struct node* child = currentNode->firstChild;
    while (child != NULL) {
        calculateTotalSize(child);
        currentNode->total_size += child->total_size;
        child = child->nextSibling;
    }

    currentNode->total_size += currentNode->size;
}

// 3
void preorderTraversal(struct node* currentNode) {
    if (currentNode == NULL) {
        return;
    }

    printf("Name: %s, Total Size: %dK\n", currentNode->name, currentNode->total_size/1000);

    // Call Self to get Child
    struct node* child = currentNode->firstChild;
    while (child != NULL) {
        preorderTraversal(child);
        child = child->nextSibling;
    }
}


int main() {
    // 1
    struct node* root = createRoot("/user/courses/", 1000, 1);
    struct node* node1 = createNode("cs016/", 2000, 1, root);
    struct node* node2 = createNode("cs252/", 1000, 1, root);
    struct node* node3 = createNode("grades", 8000, 0, node1);
    struct node* node4 = createNode("homeworks/", 1000, 1, node1);
    struct node* node5 = createNode("programs/", 1000, 1, node1);
    struct node* node6 = createNode("projects/", 1000, 1, node2);
    struct node* node7 = createNode("grades", 3000, 0, node2);
    struct node* node8 = createNode("hw1", 3000, 0, node4);
    struct node* node9 = createNode("hw2", 2000, 0, node4);
    struct node* node10 = createNode("hw3", 4000, 0, node4);
    struct node* node11 = createNode("pr1", 57000, 0, node5);
    struct node* node12 = createNode("pr2", 97000, 0, node5);
    struct node* node13 = createNode("pr3", 74000, 0, node5);
    struct node* node14 = createNode("papers/", 1000, 1, node6);
    struct node* node15 = createNode("demos/", 1000, 1, node6);
    struct node* node16 = createNode("buylow", 26000, 0, node14);
    struct node* node17 = createNode("sellhigh", 55000, 0, node14);
    struct node* node18 = createNode("market", 4786000, 0, node15);

    calculateTotalSize(root);


    printf("total size of root: %dK",(root->total_size)/1000);
    preorderTraversal(root);
}