//  https://leetcode.com/problems/merge-strings-alternately/

#include<iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string ans = "";
    int i=0, j=0, n1= word1.length(), n2=word2.length();

    while (i<n1 || j<n2)
    {
        if(i < n1)
        {
            ans += word1[i];
            i++;
        }
        if(j < n2)
        {
            ans += word2[j];
            j++;
        }
    }
    return ans;
}
int main()
{
    string s1 = "abcdef" , s2 = "wxyz";
    cout << mergeAlternately(s1, s2);

    return 0;
}