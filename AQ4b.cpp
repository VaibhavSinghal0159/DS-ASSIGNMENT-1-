#include <iostream>
using namespace std;

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 0}, {0, 1}};
    int result[2][2];

    
    for (int i = 0; i < 2; i++) {         
        for (int j = 0; j < 2; j++) {     
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) { 
                result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    cout << "Multiplication Result: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}