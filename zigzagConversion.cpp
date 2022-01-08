//  https://leetcode.com/problems/zigzag-conversion/

#include<iostream>
using namespace std;

string convert(string s, int numRows) {
    if(numRows >= s.length() || numRows == 1)
        return s;

    string ans = "";

    // for 1st row
    int x=0;
    while (x < s.length())
    {
        ans += s[x];
        x = x + 2*(numRows-1);
    }

    // for 2nd to numRows-1 row
    int i=2;
    while (i < numRows)
    {
        x = i-1;
        while (x < s.length())
        {
            ans += s[x];
            x = x + 2*(numRows-i);

            if(x < s.length())
            {
                ans += s[x];
                x = x + 2*(i-1);
            }
            else
                break;
        }
        
        i++;
    }
    
    // for last row
    x = numRows-1;
    while (x < s.length())
    {
        ans += s[x];
        x += 2*(numRows-1);
    }
    return ans;
}
int main()
{
    string s = "EXPLOITATION";
    cout <<  convert(s, 4);

    return 0;
}