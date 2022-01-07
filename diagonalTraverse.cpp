//  https://leetcode.com/problems/diagonal-traverse/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    vector<int> vec;
    int m = mat.size(), n = mat[0].size(), r = 0, c = 0;
    bool up = true;

    while (r<m && c<n)
    {
        if(up)
        {
            while (r > 0 && c < n-1)
            {
                vec.push_back(mat[r][c]);
                r--;
                c++;
            }
            vec.push_back(mat[r][c]);
            if(c==n-1)
                r++;
            else
                c++;
        }
        else
        {
            while (c > 0 && r < m-1)
            {
                vec.push_back(mat[r][c]);
                r++;
                c--;
            }
            vec.push_back(mat[r][c]);
            if(r==m-1)
                c++;
            else
                r++;
        }
        up = !up;
    }
    return vec;
}
int main()
{
    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> arr = findDiagonalOrder(vec);

    for(auto i: arr)
        cout << i << " ";

    return 0;
}