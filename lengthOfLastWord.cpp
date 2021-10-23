//  https://leetcode.com/problems/length-of-last-word/

#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.length()-1, i=n, count=0;
    while(i>=0 && s[i]==' ')
        i--;        
    while (i>=0 && s[i]!=' ')
    {
        i--;
        count++;
    }
    return count;
}
int main() {
    cout << lengthOfLastWord("   fly me   to   the moon  ");

    return 0;
}