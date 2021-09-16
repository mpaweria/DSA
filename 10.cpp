#include<iostream>
#include<vector>
using namespace std;

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
            return true;
        
        transpose(mat);
        reverse(mat);
        int n=mat.size(), count=0;
        while(count<=n)
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
    void transpose(vector<vector<int>>& mat)
    {
        int n=mat.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
    void reverse(vector<vector<int>>& mat)
    {
        int n=mat.size();
        for(int i=0; i<n/2; i++)
        {
            for(int j=0; j<n; j++)
            {
                swap(mat[i][j], mat[n-1-i][j]);
            }
        }
    }