#include<iostream>
#include<vector>
using namespace std;

// vector<int> arr(m, n);

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    vector<vector<int>> trans(matrix[0].size(), vector<int>(matrix.size(), 0));     
    for(int i=0; i<matrix.size(); i++)
    {
        for(int j=0; j<matrix[i].size(); j++)
        {
            trans[i][j] = matrix[j][i];
        }
    }       
    return trans; 
}
int main()
{
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans = transpose(vec);

    for(auto i: ans)
    {
        for(auto j: i)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}