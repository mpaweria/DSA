//  https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product=1, sum=0, diff=0, num=0;
    while(n!=0)
    {
        num=n%10;
        product=product*num;
        sum=sum+num;
        n=n/10;
    }
    diff = product-sum;
    return diff;
}
int main()
{
    cout << subtractProductAndSum(4421);
}