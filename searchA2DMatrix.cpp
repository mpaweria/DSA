//  https://leetcode.com/problems/search-a-2d-matrix/

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0, col = matrix[0].size()-1;
    while(row < matrix.size() && col >= 0)
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
int main()
{
    vector<vector<int>> vec = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << searchMatrix(vec, 3);

    return 0;
}

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
//     int row=matrix.size(), col=matrix[0].size();

//     int i=0, j=col-1;
//     while(j>=0 && i<row)
//     {
//         if(matrix[i][j]==target)
//             return true;
//         else if(matrix[i][j]<target)
//             i++;
//         else
//             j--;
//     }
//     return false;
// }