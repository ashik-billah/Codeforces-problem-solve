

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int CountClosedRight = 0, CountClosedLeft = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        CountClosedLeft += x;   // Count closed left doors
        CountClosedRight += y;  // Count closed right doors
    }

    int offRight = n - CountClosedRight; // Open right doors
    int offLeft = n - CountClosedLeft;   // Open left doors

    int changes = min(offRight, CountClosedRight) + min(offLeft, CountClosedLeft);

    cout << changes << endl;

    return 0;
}
