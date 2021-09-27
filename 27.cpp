//  https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string compWord1, compWord2;
    for(int i=0; i<word1.size(); i++)
    {
        compWord1+=word1[i];
    }
    for(int i=0; i<word2.size(); i++)
    {
        compWord2+=word2[i];
    }
    if(compWord1 == compWord2)
        return true;
    else
        return false;
}
int main()
{
    vector<string> vec1 = {"a", "bc"};
    vector<string> vec2 = {"abc"};
    cout << arrayStringsAreEqual(vec1, vec2);
}