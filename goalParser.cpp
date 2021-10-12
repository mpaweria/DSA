//  https://leetcode.com/problems/goal-parser-interpretation/

#include<iostream>
#include<string.h>
using namespace std;

string interpret(string command) {
    string result;
    for(int i=0; i<command.length(); i++)
    {
        if(command[i]=='(' && command[i+1]==')')
        {
            result.push_back('o');
            i++;
        }
        else if(command[i]=='(' && command[i+1]=='a')
        {
            result.push_back('a');
            result.push_back('l');
            i+=3;
        }
        else
            result.push_back('G');
    }        
    return result;
}
int main() {
    cout << interpret("G()(al)");
    
    return 0;
}