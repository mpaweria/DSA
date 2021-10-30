//  https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int sum=0, product=1, rem=0;
    while (n>0)
    {
        rem = n%10;
        sum+=rem;
        product*=rem;
        n/=10;
    }
    return product-sum;            
}
int main()
{
    cout << subtractProductAndSum(234);
}