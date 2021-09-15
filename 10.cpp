#include<iostream>
#include<vector>
using namespace std;

    // bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    //     int n=mat.size(), k=0;
    //     bool ans=false;
    //     while(k<n)
    //     {
    //          for(int i=0; i<n; i++)
    //          {
    //              for(int j=0; j<i; j++)
    //              {
    //                  swap(mat[i][j], mat[j][i]);
    //              }
    //          }
    //         for(int i=0; i<n/2; i++)
    //         {
    //             for(int j=0; j<n; j++)
    //             {
    //                 swap(mat[i][j], mat[n-1-i][j]);
    //             }
    //         }
    //         if(mat==target)
    //         {
    //             ans=true;
    //             break;
    //         }
    //         k++;
    //     }
    //     return ans;
    // }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        if(mat==target)
        {
            return true;
        }

        transpose(mat);
        reverse(mat);

        int n=mat.size(), k=0;
        while(k<=n)
        {
            if(mat==target)
            {
                return true;
            }
            else{
                transpose(mat);
                reverse(mat);
            }
            k++;
        }
        return false;
    }
    vector<vector<int>> transpose(vector<vector<int>>& mat)
    {
        int n=mat.size();
        for(int i=0; i<n; i++)
             {
                 for(int j=0; j<n; j++)
                 {
                     swap(mat[i][j], mat[j][i]);
                 }
             }
        return mat;
    }
    vector<vector<int>> reverse(vector<vector<int>>& mat){
        int n=mat.size();
        for(int i=0; i<n; i++)
            {
                for(int j=0; j<n/2; j++)
                {
                    swap(mat[i][j], mat[i][n-1-j]);
                }
            }
        return mat;
    }

    // Correct
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target)
        {
        
        if(mat == target)
            return true;
        int n = mat.size();
        
        transpose(mat);
        reverse(mat);
        int count = 0;
            
        while(count <= n)
        {
            if(mat == target)
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
            int n = mat.size();
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
            int n = mat.size();
            for(int i=0; i<n; i++)
            {
                for(int j = 0; j <n/2; j++)
                {
                    swap(mat[i][j], mat[i][n-j-1]);
                }
            }
        }