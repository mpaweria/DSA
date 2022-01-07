//  https://leetcode.com/problems/longest-common-prefix/

#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string str = strs[0];
    for(int i=1; i<strs.size(); i++)
    {
        int size = min(str.size(), strs[i].size());
        int k=0;
        while (k<size && str[k]==strs[i][k])
        {
            k++;
        }
        str = "";
        for(int j=0; j<k; j++)
        {
            str += strs[i][j];
        }
    }
    return str;
}
int main() {
    vector<string> vec = {"flower","flow","flight"};
    cout << longestCommonPrefix(vec);
    
    return 0;
}