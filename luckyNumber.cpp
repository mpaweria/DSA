//  https://leetcode.com/problems/lucky-numbers-in-a-matrix/

#include<iostream>
#include<vector>
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> lucky;
    // if there is only 1 element return that
    if(matrix.size()==1 && matrix[0].size()==1)
        lucky.push_back(matrix[0][0]);
    else 
    {
        int max, min, col;
        for(int i=0; i<matrix.size(); i++)
        {
            min=matrix[i][0], col=0;
            for(int j=0; j<matrix[i].size(); j++)
            {
                if(min>=matrix[i][j])
                {
                    min=matrix[i][j];
                    col=j;
                }
            }
            max=matrix[0][col];
            // j here reperesents rows, this loop calculates the largest number in the column of smallest number.
            for(int j=0; j<matrix.size(); j++)
            {
                if(max<matrix[j][col])
                    max=matrix[j][col];
            }
            if(min==max)
                lucky.push_back(max);
        }
    }
    return lucky;
}
int main()
{
    vector<vector<int>> vec = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> ans = luckyNumbers(vec);
    for(auto i: ans)
        cout << i << " ";

    return 0;
}