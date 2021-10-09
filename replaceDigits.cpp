//  https://leetcode.com/problems/replace-all-digits-with-characters/

#include<iostream>
#include<string.h>
using namespace std;

string replaceDigits(string s) {
    int i=1;
    while(i<s.length())
    {
        s[i]=s[i-1]+(s[i]-'0');
        i+=2;
    }        
    return s;
}
int main() {
    string s = "a1b2c3d4e";
    cout << replaceDigits(s);

    return 0;
}