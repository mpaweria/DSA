//  https://leetcode.com/problems/sqrtx/

#include<iostream>
using namespace std;

int mySqrt(int x) {
    int i=0;
    while(i<=x/2)
    {
        if(i*i<=x && (i+1)*(i+1)>x)
            break;
        i++;
    }
    return i;
}
int main()
{
    cout << mySqrt(289);

    return 0;
}