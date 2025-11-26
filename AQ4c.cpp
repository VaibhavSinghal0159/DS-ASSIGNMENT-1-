#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];
    int rows = 2, cols = 3;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose: ";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}