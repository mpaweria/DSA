//  https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/

#include<iostream>
#include<algorithm>
using namespace std;

bool checkAlmostEquivalent(string word1, string word2) {
    int charCount[26] = {0};

    for(int i=0; i<word1.size(); i++)
    {
        charCount[word1[i] - 'a']++;
        charCount[word2[i] - 'a']--;
    }

    for(int i=0; i<26; i++)
    {
        if(charCount[i] < -3 || charCount[i] > 3)
            return false;
    }
    return true;
}
int main()
{
    string s1 = "abcdeef";
    string s2 = "abaaacc";

    cout << checkAlmostEquivalent(s1, s2);

    return 0;
}