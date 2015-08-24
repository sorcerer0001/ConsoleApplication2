#include <iostream>
using namespace std;
 
const int maxn = 105;
 
int matrix[maxn][maxn];
 
int main() {
    int row, col, i, j, x, y;
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    for (i = 0; i < row + col - 1; i++) {
        y = i > col - 1 ? col - 1 : i;
        x = i - y;
        while (x < row && y >= 0) {
            cout << matrix[x][y] << endl;
            x++;
            y--;
        }
    }
}