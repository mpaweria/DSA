// https://leetcode.com/problems/base-7/

#include<iostream>
#include<algorithm>
using namespace std;

string convertToBase7(int num) {
    if(num == 0)
        return "0";
    string ans;
    bool isNegative = false;
    if(num < 0)
    {
        num *= -1;
        isNegative = true;
    }        
    while (num > 0)
    {
        ans += num%7 + 48;
        num /= 7;
    }
    reverse(ans.begin(), ans.end());

    if(isNegative)
        ans = "-" + ans;

    return ans;
}
int main()
{
    cout << convertToBase7(100);

    return 0;
}