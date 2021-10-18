//  https://leetcode.com/problems/search-a-2d-matrix-ii/

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0, col = matrix[0].size()-1;

    while(row<matrix.size() && col>=0)
    {
        if(matrix[row][col]==target)
            return true;
        else if(matrix[row][col] < target)
            row++;
        else
            col--;
    }
    return false;
}
int main() {
    vector<vector<int>> vec = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout << searchMatrix(vec, 5);

    return 0;
}