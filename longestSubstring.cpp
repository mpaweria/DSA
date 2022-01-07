//  https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int start = -1, maxLength = 0;
    vector<int> vec(127, -1);

    for(int i=0; i<s.length(); i++)
    {
        if(vec[s[i]]>start)
            start = vec[s[i]];
        vec[s[i]]=i;
        maxLength = max(maxLength, i-start);
    }
    return maxLength;
}
int main()
{
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);

    return 0;
}