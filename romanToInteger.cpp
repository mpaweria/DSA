//  https://leetcode.com/problems/roman-to-integer/

#include<iostream>
using namespace std;

int romanToInt(string s) {
    int num=0, i=s.length()-1;
    while(i>=0)
    {
        if(s[i]=='V' || s[i]=='X')
        {
            if(i>0 && s[i-1]=='I')
            {
                if(s[i]=='V')
                    num+=4;
                else
                    num+=9;
                i-=2;
            }
            else
            {
                if(s[i]=='V')
                    num+=5;
                else
                    num+=10;
                i--;
            }
        }
        else if(s[i]=='L' || s[i]=='C')
        {
            if(i>0 && s[i-1]=='X')
            {
                if(s[i]=='L')
                    num+=40;
                else
                    num+=90;
                i-=2;
            }
            else
            {
                if(s[i]=='L')
                    num+=50;
                else
                    num+=100;
                i--;
            }
        }
        else if(s[i]=='D' || s[i]=='M')
        {
            if(i>0 && s[i-1]=='C')
            {
                if(s[i]=='D')
                    num+=400;
                else
                    num+=900;
                i-=2;
            }
            else
            {
                if(s[i]=='D')
                    num+=500;
                else
                    num+=1000;
                i--;
            }
        }
        else
        {
            num+=1;
            i--;
        }
    }
    return num;
}

int main()
{
    cout << romanToInt("MDXVI");

    return 0;
}