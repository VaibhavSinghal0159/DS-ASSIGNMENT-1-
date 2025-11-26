#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    int elem, pos, i;

    cout << "Original Array: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Enter element to insert: ";
    cin >> elem;
    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++;

    cout << "Array after Insertion: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}