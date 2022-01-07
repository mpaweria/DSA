//  https://leetcode.com/problems/reshape-the-matrix/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size(), n = mat[0].size();
    if(m*n != r*c)
        return mat;

    vector<vector<int>> vec(r, vector<int>(c,0));
    int row=0, col=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            vec[row][col] = mat[i][j];
            col++;

            if(col == c)
            {
                row++;
                col=0;
            }
        }
    }
    return vec;
}
void printArray(vector<vector<int>> vec)
{
    for(auto i: vec)
    {
        for(auto j: i)
            cout << j << " ";
        cout << endl;
    }
}
int main() 
{
    vector<vector<int>> vec = {{1,2},{3,4}};
    int r=2, c=4;
    printArray(matrixReshape(vec, r, c));

    return 0;
}