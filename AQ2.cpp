#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    int temp[100];
    int j = 0; 

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (isDuplicate == 0) {
            temp[j] = arr[i];
            j++;
        }
    }

    cout << "Unique Elements: ";
    for (int i = 0; i < j; i++) cout << temp[i] << " ";

    return 0;
}