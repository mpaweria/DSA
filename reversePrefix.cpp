// https://leetcode.com/problems/reverse-prefix-of-word/

#include<iostream>
#include<string.h>
using namespace std;

string reversePrefix(string &word, char ch) {
    int count=0;
    for(int i=0; i<word.length(); i++)
    {
        if(word[i]==ch)
        {
            count = i;
            break;
        }
    }    
    if(count==0)
        return word;
    
    int s=0, e=count;   
    while(s<e)
    {
        swap(word[s], word[e]);
        s++,e--;
    }
    return word;
}
int main()
{
    string s = "xyxzxe";
    cout << reversePrefix(s, 'z');
}