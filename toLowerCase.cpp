//  https://leetcode.com/problems/to-lower-case/

#include<iostream>
#include<string.h>
using namespace std;

string toLowerCase(string s) {
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')      
            s[i]=s[i]+32;
    }        
    return s;
}
int main() {
    string s = "hello WORLD";
    cout << toLowerCase(s);

    return 0;
}