//  https://leetcode.com/problems/ugly-number/

#include<iostream>
using namespace std;

bool isUgly(int n) {
    if(n<=0)
        return false;
    int flag=1;
    while (true)
    {
        if(n%2==0)
        {
            n/=2;
            continue;
        }
        else if(n%3==0)
        {
            n/=3;
            continue;
        }
        else if(n%5==0)
        {
            n/=5;
            continue;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==0 && n>1)
        return false;
    else
        return true;
}
int main()
{
    cout << isUgly(6);

    return 0;
}