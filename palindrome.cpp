//  https://leetcode.com/problems/palindrome-number/

#include<iostream>
using namespace std;

bool isPalindrome(int x) {
    long long int r=0, sum=0, num=x;
    if(x<0)
        return false;
    while(x>0)
    {
        r = x%10;
        sum = (sum*10)+r;
        x = x/10;
    }        
    if(sum==num)
        return true;
    else
        return false;
}
int main()
{
    cout << isPalindrome(1221);

    return 0;
}