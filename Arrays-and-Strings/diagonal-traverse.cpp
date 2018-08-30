#include <iostream>

static int optimize =  []() {ios::sync_with_stdio(false); cin.tie(nullptr); return 0;}();

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    // base case
    if (matrix.empty() || matrix[0].empty()) return {};
    
    // get sizes
    int m = matrix.size(), n = matrix[0].size(), row = 0, col = 0, k = 0;
    
    // create new return vector
    vector<int> res(m * n);
    
    // directions
    vector<vector<int>> dirs{{-1,1}, {1,-1}};
    
    // traverse
    for (int i = 0; i < m * n; ++i) {
        res[i] = matrix[row][col];
        row += dirs[k][0];
        col += dirs[k][1];
        if (row >= m) {row = m - 1; col += 2; k = 1 - k;}
        if (col >= n) {col = n - 1; row += 2; k = 1 - k;}
        if (row < 0) {row = 0; k = 1 - k;}
        if (col < 0) {col = 0; k = 1 - k;}
    }
    return res;
}

int main() {
    cout << findDiagonalOrder([1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]) << endl;
}