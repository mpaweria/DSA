//  https://leetcode.com/problems/valid-palindrome-ii/

#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(string s, int start, int end)
{
    while (start<end)
    {
        if(s[start]!=s[end])
            return false;
        start++;
        end--;
    }
    return true;    
}
bool validPalindrome(string s) {
    int l=0, r=s.length()-1;
    while (l<r)
    {
        if(s[l] != s[r])
        {
            if(isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1))
                return true;
            
            return false;
        }
        l++;
        r--;
    }
    return true;    
}
int main()
{
    string s = "abca";
    cout << validPalindrome(s);

    return 0;
}