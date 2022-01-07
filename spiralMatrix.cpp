//  https://leetcode.com/problems/spiral-matrix/

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rowStart = 0, rowEnd = matrix.size()-1, colStart = 0, colEnd = matrix[0].size()-1;
    vector<int> ans;
    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for(int col = colStart; col <= colEnd; col++)
            ans.push_back(matrix[rowStart][col]);
        
        for(int row = rowStart+1; row <= rowEnd; row++)
            ans.push_back(matrix[row][colEnd]);

        for(int col = colEnd-1; col >= colStart; col--)
        {
            if(rowStart == rowEnd)
                break;
            ans.push_back(matrix[rowEnd][col]);
        }

        for(int row = rowEnd-1; row >= rowStart+1; row--)
        {
            if(colStart == colEnd)
                break;
            ans.push_back(matrix[row][colStart]);
        }
        rowStart++;
        rowEnd--;
        colStart++;
        colEnd--;
    }
    return ans;
}
void print(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<vector<int>> vec = {
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}
                              };
    
    print(spiralOrder(vec));

    return 0;
}