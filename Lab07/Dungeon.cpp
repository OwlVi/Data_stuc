#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // ปรับความเร็วในการอ่าน/เขียน stdio
    cin.tie(NULL);

    int n, q;

    cin >> n;
    int mon[n];

    for (int i = 0; i < n; ++i) {
        cin >> mon[i];
    }

    cin >> q;
    int dmg[q];

    for (int i = 0; i < q; i++) {
        cin >> dmg[i];
    }

    sort(mon, mon + n); // เรียงลำดับมอนสเตอร์เพื่อให้เร็วในการค้นหา

    for (int i = 0; i < q; i++) {
        int count = upper_bound(mon, mon + n, dmg[i]) - mon;
        cout << count << endl; 
    }

    return 0;
}
