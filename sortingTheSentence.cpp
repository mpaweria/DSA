//  https://leetcode.com/problems/sorting-the-sentence/

#include<iostream>
#include<vector>
using namespace std;

string sortSentence(string s) {
    string str; 
    vector<string> vec(10,"");

    for(int i=0; i<s.length(); i++)
    {
        if(isdigit(s[i]))
        {
            vec[s[i]-'0'] = str + " ";
            str ="";
            i++;
            continue;
        }
        str+=s[i];
    }
    s="";
    for( auto v : vec)
        s+=v;
    s.pop_back();
    return s;
}

int main()
{
    string s = "is2 a3 This1 string4";
    cout << sortSentence(s);

    return 0;
}