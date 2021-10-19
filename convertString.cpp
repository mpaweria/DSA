//  https://leetcode.com/problems/sum-of-digits-of-string-after-convert/

#include<iostream>
#include<string.h>
using namespace std;

int getLucky(string s, int k) {
    string str = "";
    int num=0;
    for(int i=0; i<s.length(); i++)
    {
        str += to_string(s[i]-'a'+1);
    }
    while(k--)
    {
        num=0;
        for(int i=0; i<str.length(); i++)
            num+=str[i]-'0';
        str=to_string(num);
    }
    return num;
}
int main() 
{
    cout << getLucky("iiii", 1);

    return 0;
}