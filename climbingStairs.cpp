//  https://leetcode.com/problems/climbing-stairs/

#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n) {
    if(n <= 2)
        return n;
    int steps = 3, t1 = 2, t2;
    for(int i=3; i<n; i++)
    {
        t2 = steps;
        steps += t1;
        t1 = t2;
    }        
    return steps;
}
int main()
{
    cout << climbStairs(4);

    return 0;
}