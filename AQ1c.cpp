#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos, i;

    cout << "Original Array: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 

    cout << "Array after Deletion: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}