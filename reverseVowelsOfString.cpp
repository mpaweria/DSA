//  https://leetcode.com/problems/reverse-vowels-of-a-string/

#include<iostream>
using namespace std;

bool isVowel(char a) 
{
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        return true;
    return false;
}
string reverseVowels(string s) {
    int i=0, j=s.length()-1;
    while(i<j)
    {
        if(isVowel(tolower(s[i])))
        {
            while (!isVowel(tolower(s[j])))
            {
                j--;
            }
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
        i++;
    }
    return s;
}
int main()
{
    string s = "leetcode";
    cout << reverseVowels(s);

    return 0;
}