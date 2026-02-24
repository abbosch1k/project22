#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            cout << "Found at index " << mid;
            return 0;
        }
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << "Not found";
}
