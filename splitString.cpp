//  https://leetcode.com/problems/split-a-string-in-balanced-strings/

#include<iostream>
#include<string.h>
using namespace std;

int balancedStringSplit(string s) {
    int countL=0, countR=0, count=0;        
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
            countL++;
        else if(s[i]=='R')
            countR++;
        if(countR==countL)
        {
            countL=0;
            countR=0;
            count++;
        }
    }
    return count;
}
int main()
{
    cout << balancedStringSplit("RLRRLLRLRL");

    return 0;
}