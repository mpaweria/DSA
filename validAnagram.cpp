//  https://leetcode.com/problems/valid-anagram/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length())
        return false;
    vector<int> vec(26, 0);
    for(int i=0; i<s.length(); i++)
        vec[s[i]-'a']++;
    for(int i=0; i<t.length(); i++)
    {
        vec[t[i]-'a']--;

        if(vec[t[i]-'a'] < 0)
            return false;
    }
    return true;
}
int main()
{
    string s = "anagram", t = "gramana";
    cout << isAnagram(s,t);

    return 0;
}

// bool isAnagram(string s, string t) {
//     if(s.length() != t.length())
//         return false;
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     if(s==t)
//         return true;
//     else
//         return false;
// }