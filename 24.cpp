// https://leetcode.com/problems/shuffle-string/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string restoreString(string s, vector<int>& indices) {
    string str = s;
    for(int i=0; i<indices.size(); i++)
    {
        str[indices[i]] = s[i];     
    }    
    return str;
}

int main()
{
    string s = "codeleet";
    vector <int> indices = {4,5,6,7,0,2,1,3};

    cout << restoreString(s, indices);
}