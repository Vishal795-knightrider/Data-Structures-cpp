#include <iostream>
#include <vector>
using namespace std;

class NQueen {
    int n;
    vector<vector<string>> ans;

    bool isSafe(vector<string>& board, int row, int col) {

        // Check upper column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Check upper left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        // Check upper right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void solve(vector<string>& board, int row) {

        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {

            if (isSafe(board, row, col)) {

                board[row][col] = 'Q';

                solve(board, row + 1);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

public:
    void solveNQueens(int size) {

        n = size;

        vector<string> board(n, string(n, '.'));

        solve(board, 0);

        for (auto solution : ans) {
            for (string row : solution) {
                cout << row << endl;
            }
            cout << endl;
        }
    }
};

int main() {

    int n;
    cin >> n;

    NQueen obj;
    obj.solveNQueens(n);

    return 0;
}