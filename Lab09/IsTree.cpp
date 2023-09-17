#include <iostream>
#include <vector>
#include <queue>

using namespace std;
bool isTree(vector<vector<int>>& edges, int node, int parent, vector<bool>& visited) {
    visited[node] = true;
    
    for (int neighbor : edges[node]) {
        if (!visited[neighbor]) {
            if (isTree(edges, neighbor, node, visited)) {
                return true;
            }
        } else if (neighbor != parent) {
            return true;
        }
    }
    
    return false;
}

bool isTree(vector<vector<int>>& edges, int N) {
    vector<bool> visited(N, false);
    
    if (isTree(edges, 0, -1, visited)) {
        return false; 
    }
    
    for (bool visit : visited) {
        if (!visit) {
            return false; 
        }
    }
    
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> edges(N);

    for (int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        edges[U].push_back(V);
        edges[V].push_back(U);
    }
    
    if (isTree(edges, N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}
