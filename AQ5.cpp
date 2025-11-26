#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int r = 3, c = 3;

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum = sum + arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    for (int i = 0; i < c; i++) {
        int sum = 0;
        for (int j = 0; j < r; j++) {
            sum = sum + arr[j][i]; 
        }
        cout << "Column " << i + 1 << ": " << sum << endl;
    }
    return 0;
}