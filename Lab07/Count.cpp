#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N,seacrh,count = 0;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    cin >> seacrh;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == seacrh)
        {
            count++;
        }
    }
           

    cout << count;

    return 0;
}
