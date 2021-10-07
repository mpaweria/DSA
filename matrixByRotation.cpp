//  https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/

#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int>>& mat) {
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=i; j<mat.size(); j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
}
void reverse(vector<vector<int>>& mat)
{
    int n = mat.size();
    for(int i=0; i<n/2; i++)
    {
        for(int j=0; j<n; j++)
        {
            swap(mat[i][j], mat[n-1-i][j]);
        }
    }
}

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n=mat.size(), count=0;
    if(mat==target)
        return true;

    transpose(mat);
    reverse(mat);
    while (count<=n)
    {
        if(mat==target)
            return true;
        else
        {
            transpose(mat);
            reverse(mat);
        }
        count++;
    }      
    return false; 
}

int main() {
    vector<vector<int>> mat = {{0,0,0},{0,1,0},{1,1,1}}, target={{1,1,1},{0,1,0},{0,0,0}};
    cout << findRotation(mat, target)<<endl;
}