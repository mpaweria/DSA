//  https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/

#include<iostream>
using namespace std;

bool areNumbersAscending(string s) {
    int min=-1;
    for(int i=0; i<s.length(); i++)
    {
        if(isdigit(s[i]))
        {
            string str = "";
            while (isdigit(s[i]))
            {
                str+=s[i];
                i++;
            }
            if(min < stoi(str))
                min=stoi(str);
            else
                return false;
        }
    }
    return true;
}
int main()
{
    string s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles";
    cout << areNumbersAscending(s);

    return 0;
}