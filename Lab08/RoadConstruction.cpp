#include <iostream>
#include <vector>
#include <set>

using namespace std;

//Depth-First Search
void dfs(vector<vector<int>>& graph, set<int>& visited, int current) {
    visited.insert(current);
    for (int neighbor : graph[current]) {
        if (visited.count(neighbor) == 0) {
            dfs(graph, visited, neighbor);
        }
    }
}

int main() {
    int N, M;
    int u, v;
    int count = 0;
    cin >> N >> M; // city , road

    vector<vector<int>> graph(N+1); // Create
    set<int> visited; // Connect Node

    for (int i = 1; i <= M; ++i) {
        cin >> u >> v; // Road Connect
        graph[u].push_back(v);
        graph[v].push_back(u);
    }


    // Call DFS from City 1
    dfs(graph, visited, 1);

    for (int i = 1; i <= N; ++i) {
        if (visited.count(i) == 0) {
            graph[1].push_back(i);// Connect City
            graph[i].push_back(1);// Connect City
            dfs(graph, visited, i);// Find City Unconnect
            count++;
        }
    }
    cout << count;

    return 0;
}
