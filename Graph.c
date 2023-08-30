#include<stdio.h>
#include<stdlib.h>


    // Function to create a graph with n vertices
int** createGraph(const int n) {
    // Return 2D array of size n*n
    int** adjMatrix = malloc(sizeof(int*)*n);
    for (int i=0; i<n; i++) {
        adjMatrix[i] = malloc(sizeof(int)*n);
        for (int j=0; j<n; j++)
            adjMatrix[i][j] = 0;
    }
        return adjMatrix;
    }
    //Function to add a directed edge into the graph
void addEdge(int** adjMatrix, int u, int v) {
        adjMatrix[u][v] = 1;
    }
    
    // Function to print the adjacency matrix of the graph
void printGraph(int** adjMatrix, int n)
    {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                printf("%d ", adjMatrix[i][j]);
            }
            printf("\n");
        }
    }

int main()
{
    int n = 5;
    int u,v ;
    // scanf("%d",&n);

    int** adjMatrixG1 = createGraph(n);
    // int** adjMatrixG2 = createGraph(n);

    // for (int i = 0; i < n*n; i++)
    // {
    //     scanf("%d %d",&u,&v)
    //     addEdge(adjMatrixG1, u, v);
    //     if (u == -1 || v == -1)
    //     {
    //         break;
    //     }
        
    // }
    

    // G1
    addEdge(adjMatrixG1, 0, 1);
    addEdge(adjMatrixG1, 0, 3);
    addEdge(adjMatrixG1, 1, 2);
    addEdge(adjMatrixG1, 1, 4);
    addEdge(adjMatrixG1, 2, 1);
    addEdge(adjMatrixG1, 2, 4);
    addEdge(adjMatrixG1, 4, 3);

    //G2
    // addEdge(adjMatrixG2, 0, 1);
    // addEdge(adjMatrixG2, 0, 3);
    // addEdge(adjMatrixG2, 1, 4);
    // addEdge(adjMatrixG2, 2, 0);
    // addEdge(adjMatrixG2, 2, 3);
    // addEdge(adjMatrixG2, 3, 4);


    printGraph(adjMatrixG1, n);
    // printf("--------\n");
    // printGraph(adjMatrixG2, n);

    return 0;
}