#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {11, 12, 14, 15, 17, 18, 20};
    int n = sizeof(a)/sizeof(a[0]);
    int target;
    cin >> target;

    int lb = 0, ub = n - 1;
    int mid;
    bool found = false;

    while (lb <= ub) {
        mid = (lb + ub) / 2;
        if (a[mid] == target) {
            found = true;
            break;
        } else if (a[mid] < target) {
            lb = mid + 1;
        } else {
            ub = mid - 1;
        }
    }

    if (found)
        cout << "Found at index: " << mid << endl;
    else
        cout << "Not found" << endl;

    return 0;
}

