#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M,vertex,degree=0;

    cin >> N >> M; // vertex , edge

    cin >> vertex; // Degree of vertex

    vector<vector<int>> graph(N); //Create Graph

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);

    }

    // Graph 
    for (int i = 0; i < N; ++i) {
        cout << i << ": ";
        for (int j = 0; j < graph[i].size(); ++j) {
            cout << graph[i][j] << " ";
            if (i == vertex)
            {
                degree++;//
            }
        }   
        cout << endl;
    }

    cout << degree;

    return 0;
}
