//  https://leetcode.com/problems/sum-of-square-numbers/

#include<iostream>
using namespace std;

bool judgeSquareSum(int c) {
    for(int i=0; i<=c; i++)
    {
        for(int j=i; j<=c; j++)
        {
            if(i*i + j*j == c)
            {
                cout << i << " " << j;
                return true;
            }
        }
    }        
    return false;
}
int main()
{
    cout << judgeSquareSum(0);

    return 0;
}