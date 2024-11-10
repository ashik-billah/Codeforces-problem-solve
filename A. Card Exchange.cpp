#include<bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int m, n, z;
        vector<int> arr;

        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            cin >> z;
            arr.push_back(z);
        }

        int total = 0;
        for (int card : arr) {
            total += (card + n - 1) / n * n;
        }

        cout << total / n << endl;
    }

    return 0;
}
