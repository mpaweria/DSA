//  https://leetcode.com/problems/first-unique-character-in-a-string/

#include<iostream>
#include<vector>
using namespace std;

int firstUniqChar(string s) {
    vector<int> vec(26, 0);
    for(auto i: s)
        vec[i-'a']++;
    for(int i=0; i<s.length(); i++)
    {
        if(vec[s[i]-'a']==1)
            return i;
    }
    return -1;
}
int main() 
{
    string s = "loveleetcode";
    cout << firstUniqChar(s);

    return 0;
}