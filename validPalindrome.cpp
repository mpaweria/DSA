//  https://leetcode.com/problems/valid-palindrome/

#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) {
    string str;
    for(int i=0; i<s.length(); i++)
    {
        if(tolower(s[i]) >= 97 && tolower(s[i]) <= 122)
            str+=tolower(s[i]);
        else if(s[i]>='0' && s[i]<='9')
            str+=s[i];
    }        
    int l=0, r=str.length()-1;
    while (l<r)
    {
        if(str[l]!=str[r])
            return false;    
        l++;
        r--;
    }
    return true;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);

    return 0;
}