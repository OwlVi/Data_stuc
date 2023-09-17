#include <iostream>
#include <vector>

using namespace std;

vector<int> childCounts;

int countChildNodes(const vector<vector<int>>& tree, int node) {
    if (childCounts[node] != -1) {
        return childCounts[node];
    }

    int childNodes = 0;
    for (int child : tree[node]) {
        childNodes += 1 + countChildNodes(tree, child);
    }

    childCounts[node] = childNodes;
    return childNodes;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> tree(n + 1);
    childCounts.assign(n + 1, -1);
    for (int i = 2; i <= n; i++) {
        int key;
        cin >> key;

        tree[key].push_back(i);
    }

    for (int i = 1; i <= n; i++) {
        int childCount = countChildNodes(tree, i);
        cout << childCount << " ";
    }

    return 0;
}
