//  https://leetcode.com/problems/check-if-the-sentence-is-pangram/

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool checkIfPangram(string sentence) {
    vector<bool> vec(125);

    for(auto i: sentence)
        vec[i]=true;
    for(int i=97; i<=122; i++)
    {
        if(!vec[i])
            return false;
    }    
    return true;
}
int main() {
    cout << checkIfPangram("thequickbrownfoxjumpsoverthelazydog");

    return 0;
}