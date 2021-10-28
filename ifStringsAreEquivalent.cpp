//  https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

#include<iostream>
#include<vector>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string str1, str2;
    for(int i=0; i<word1.size(); i++)
    {
        str1 += word1[i];
    } 
    for(int i=0; i<word2.size(); i++)
    {
        str2 += word2[i];
    }    
    if(str1 == str2)
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