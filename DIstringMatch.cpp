//  https://leetcode.com/problems/di-string-match/

#include<iostream>
#include<vector>
using namespace std;

vector<int> diStringMatch(string s) {
    int large = s.length(), small = 0;
    vector<int> vec;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='I')
        {
            vec.push_back(small);
            small++;
        }
        else
        {
            vec.push_back(large);
            large--;
        }
    }
    vec.push_back(small);
    return vec;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    string s = "IDID";
    printArray(diStringMatch(s));

    return 0;
}