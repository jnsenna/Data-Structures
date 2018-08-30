#include <iostream>

template <size_t row, size_t col>
void printArray(int (&a)[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Example A:" << endl;
    int a[3][5];
    printArray(a);
    cout << "Example B:" << endl;
    int b[2][5] = {{1, 2, 3}};
    printArray(b);
    cout << "Example C:"<< endl;
    int c[][5] = {1, 2, 3, 4, 5, 6, 7};
    printArray(c);
    cout << "Example D:" << endl;
    int d[][5] = {{1, 2, 3, 4}, {5, 6}, {7}};
    printArray(d);
}