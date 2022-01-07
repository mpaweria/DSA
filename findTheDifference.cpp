//  https://leetcode.com/problems/find-the-difference/

#include<iostream>
#include<algorithm>
using namespace std;

char findTheDifference(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != t[i])
            return t[i];
    }
    return t[t.length()-1];
}
int main()
{
    string s = "abde", t = "abcde";
    cout << findTheDifference(s, t);

    return 0;
}