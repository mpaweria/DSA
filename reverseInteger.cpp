//  https://leetcode.com/problems/reverse-integer/

#include<iostream>
using namespace std;

int reverse(int x) {
    long long int r=0, num=0;
    int sign = x>0 ? 1 : -1;
    
    while(x!=0)
    {
        r=x%10;
        num=(num*10)+r;
        x=x/10;
    }        
    if(sign*num>2147483647)
        return 0;

    return num;
}
int main()
{
    cout << reverse(1534236469);

    return 0;
}