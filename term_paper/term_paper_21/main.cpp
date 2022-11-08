#include <iostream>
using namespace std;

int main() {
    int rows=0, cols=0;


    cout << "Enter the dimensions of your matrix\nrows: ";
    cin >> rows;
    cout << "cols: ";
    cin >> cols;

    int arr[rows][cols];

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
                cout << "arr[" << row << "]["<< col << "]";
                cin >> arr[row][col];
        }
    }

    int special_diagonals = 0;
    int curr_diag_sum = 0;
// cycle for diagonals above the main one
    for (int col = 1; col < cols; ++col) {
        for (int row = 0; row < (cols - col); ++row) {
            curr_diag_sum += arr[row][col + row];
        }
        if(curr_diag_sum == 0){
            special_diagonals += 1;
        }
        curr_diag_sum = 0;
    }
    // cycle for the diagonals under the main one
    for (int row = 1; row < rows; ++row) {
        for (int col = 0; col < (rows- row); ++col) {
            curr_diag_sum += arr[row + col][col];
        }
        if(curr_diag_sum == 0){
            special_diagonals += 1;
        }
        curr_diag_sum = 0;
    }

    cout << special_diagonals;
    return 0;
}


