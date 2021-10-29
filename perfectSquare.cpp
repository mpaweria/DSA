//  https://leetcode.com/problems/valid-perfect-square/

#include<iostream>
using namespace std;

bool isPerfectSquare(int num) {
    int s=0, e=num;
    while(s<=e)
    {
        long long int mid = (s+e)/2;
        if(mid*mid == num)
            return true;
        else if(mid*mid < num)
            s = mid+1;
        else
            e = mid-1;
    }
    return false;
}
int main()
{
    cout << isPerfectSquare(121);

    return 0;
}