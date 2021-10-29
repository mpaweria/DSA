//  https://leetcode.com/problems/sum-of-square-numbers/

#include<iostream>
#include<cmath>
using namespace std;

bool judgeSquareSum(int c) {
    long long int s=0, e=pow(c, 0.5);
    while(s<=e)
    {
        if(s*s + e*e == c)
            return true;
        else if(s*s + e*e < c)
            s++;
        else
            e--;
    }        
    return false;
}
int main()
{
    cout << judgeSquareSum(2);

    return 0;
}