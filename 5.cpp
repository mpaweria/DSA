#include<iostream>
#include<vector>
using namespace std;

// My Version

// int diagonalSum(vector<vector<int>>& mat) {
//         int n=mat.size(), sum=0;
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<mat[i].size(); j++)
//             {
//                 if(i==j || i+j==n-1)
//                 {
//                     sum+=mat[i][j];
//                 }
//             }
//         }
//         return sum;
//     }

//  Another Version

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size(), sum=0;
    for(int i=0; i<n; i++)
    {
        //  
        if(i==n-i-1)
            sum += mat[i][i];
        else
            sum = sum + mat[i][i] + mat[i][n-i-1];
    }
    return sum;
}

int main()
{
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    cout << diagonalSum(vec);

    return 0;
}