//  https://leetcode.com/problems/number-of-segments-in-a-string/

#include<iostream>
#include<string.h>
using namespace std;

int countSegments(string s) {
    int count=0;
    s.push_back(' ');
    if(s.length()==0)
        return 0;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]==' '&& s[i-1]!=' ')
            count++;
    }        
    return count;
}
int main() {
    cout << countSegments("Hello, my name is John");

    return 0;
}