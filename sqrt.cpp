//  https://leetcode.com/problems/sqrtx/

#include<iostream>
using namespace std;

int mySqrt(int x) {
    int s=0, e=x, ans=0;
    while (s<=e)
    {
        long long int mid = (s+e)/2;
        if(mid*mid <= x)
        {
            ans = mid;
            s= mid+1;
        }
        else
            e = mid-1;
    }
    return ans;
}

int main()
{
    cout << mySqrt(8);

    return 0;
}
// int mySqrt(int x) {
//     long long int i=0;
//     while (i<=x/2)
//     {
//         if(i*i <= x && (i+1)*(i+1) > x)
//             break;
//         i++;
//     }
//     return i;
// }