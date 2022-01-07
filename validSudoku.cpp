//  https://leetcode.com/problems/valid-sudoku/

#include<iostream>
#include<vector>
using namespace std;

bool valid(vector<vector<char>>& board, int row, int col)
{
    int count=0;
    for(int i=0; i<board.size(); i++)
    {
        // check if the current cell number is present in the same column
        if(board[row][i] == board[row][col] && col!=i)
            return false;
        // check if the current cell number is present in the same row
        if(board[i][col] == board[row][col] && row!=i)
            return false;
        // check if the current cell number is present in the 3x3 grid
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == board[row][col])
            count++;
        // number is present more than once in a 3*3 grid
        if(count > 1)
            return false;
    }
    return true;
}
bool isValidSudoku(vector<vector<char>>& board) {
    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[0].size(); j++)
        {
            if(board[i][j] != '.')
            {
                if(valid(board, i, j) ==  false)
                {
                    return false;
                }
            }
        }
    }        
    return true;
}
int main()
{
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'}
                                 ,{'6','.','.','1','9','5','.','.','.'}
                                 ,{'.','9','8','.','.','.','.','6','.'}
                                 ,{'8','.','.','.','6','.','.','.','3'}
                                 ,{'4','.','.','8','.','3','.','.','1'}
                                 ,{'7','.','.','.','2','.','.','.','6'}
                                 ,{'.','6','.','.','.','.','2','8','.'}
                                 ,{'.','.','.','4','1','9','.','.','5'}
                                 ,{'.','.','.','.','8','.','.','7','9'}};
    cout << isValidSudoku(board);

    return 0;
}
