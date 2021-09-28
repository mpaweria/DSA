//  https://leetcode.com/problems/valid-perfect-square/

#include<iostream>
using namespace std;

bool isPerfectSquare(int num) {
    int start=1, end=num, mid;
    while (start<=end)
    {
        mid = start + (end-start)/2;
        if(mid*mid == num)
            return true;
        else if(mid*mid < num)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}
int main()
{
    cout << isPerfectSquare(16);

    return 0;
}