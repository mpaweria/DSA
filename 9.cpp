#include<iostream>
#include<vector>
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> luckyNumber;
    // if there is only one element then return that element
    if(matrix.size()==1 && matrix[0].size()==1)
    {
        luckyNumber.push_back(matrix[0][0]);
        return luckyNumber;
    }

    // i denotes the row and j denotes the column
    for(int i=0; i<matrix.size(); i++)
    {
        int col=0, rowMin=matrix[i][0];
        for(int j=0; j<matrix[i].size(); j++)
        {
            if(rowMin > matrix[i][j])
            {
                col=j;
                rowMin = matrix[i][j];
            }
        }
        // j denotes the row index and col denotes the column index
        int colMax=matrix[0][col];
        for(int j=0; j<matrix.size(); j++)
        {
            if(colMax < matrix[j][col])
                colMax = matrix[j][col];
            
        }
        if(rowMin==colMax)
            luckyNumber.push_back(rowMin);
    }
    return luckyNumber;
}
void print(vector<int> vec)
{
    for(auto v: vec)
        cout << v;
}
int main()
{
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    print(luckyNumbers(vec));

    return 0;
}