//  https://leetcode.com/problems/implement-strstr/

#include<iostream>
using namespace std;

int strStr(string haystack, string needle) {
    if(needle==""||haystack==needle)
        return 0;
    for(int i=0; i<haystack.length(); i++)
    {
        if(haystack[i]==needle[0])
        {
            int n=1, flag=1;
            while (n<needle.length())
            {
                if(haystack[i+n]==needle[n])
                    flag=1;
                else
                {
                    flag=0;
                    break;
                }
                n++;
            }
            if(flag==1)
                return i;            
        }
    }        
    return -1;
}
int main()
{
    string haystack = "hello ", needle = "ll";
    cout << strStr(haystack, needle);

    return 0;
}