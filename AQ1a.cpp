#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Displaying Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}