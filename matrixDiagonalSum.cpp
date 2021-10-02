//  https://leetcode.com/problems/matrix-diagonal-sum/description/

#include<iostream>
#include<vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int sum=0, n=mat[0].size();
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=0; j<mat[i].size(); j++)
        {
            if(i==j || i+j==n-1)
                sum+=mat[i][j];
        }
    }        
    return sum;
}
int main()
{
    vector<vector<int>> vec = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};

    cout << diagonalSum(vec);

    return 0;
}

//  Time complexity O(n)
// int diagonalSum(vector<vector<int>>& mat) {
//     int n = mat.size(), sum=0;
//     for(int i=0; i<n; i++)
//     {
//         //  
//         if(i==n-i-1)
//             sum += mat[i][i];
//         else
//             sum = sum + mat[i][i] + mat[i][n-i-1];
//     }
//     return sum;
// }