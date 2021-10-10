//  https://leetcode.com/problems/truncate-sentence/

#include<iostream>
#include<string.h>
using namespace std;

string truncateSentence(string s, int k) {
    int word=0;
    string ans;
    for(int i=0; i<s.length(); i++)
    {
        ans.push_back(s[i]);
        if(s[i]==' ')
            word++;
        if(word==k)
            break;
    }       
    return ans;
}
int main() {
    cout << truncateSentence("Hello how are you Contestant", 4);

    return 0;
}