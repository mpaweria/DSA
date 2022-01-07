//  https://leetcode.com/problems/ransom-note/

#include<iostream>
#include<vector>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    if(ransomNote.length() > magazine.length())
        return false;
    if(ransomNote == magazine)        
        return true;
    vector<int> vec(26, 0);
    for(int i=0; i<ransomNote.length(); i++)
        vec[ransomNote[i]-'a']++;
    for(int i=0; i<magazine.length(); i++)
        vec[magazine[i]-'a']--;

    for(auto i: vec)
    {
        if(i>0)
            return false;
    }
    return true;
}
int main()
{
    string s1 = "aaa", s2 = "aab";
    cout << canConstruct(s1, s2);

    return 0;
}