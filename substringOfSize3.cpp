//  https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/

#include<iostream>
using namespace std;

int countGoodSubstrings(string s) {
    int count = 0;
    char a = s[0], b = s[1], c;

    for(int i=2; i<s.size(); i++)
    {
        c = s[i];
        if(a != b && b != c && c != a)
            count++;

        a = b;
        b = c;
    }
    return count;
}

int main()
{
    string str = "aababcabc";
    cout << countGoodSubstrings(str);

    return 0;
}

// Taking more time
// int countGoodSubstrings(string s) {
//     int count = 0;

//     for(int i=1; i<s.length()-1; i++)
//     {
//         if(s[i-1] != s[i] && s[i] != s[i+1] && s[i-1] != s[i+1])
//             count++;        
//     }        
//     return count;
// }