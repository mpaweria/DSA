//  https://leetcode.com/problems/maximum-product-subarray/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    int res=nums[0], l=1, r=1, n=nums.size();

    for(int i=0; i<n; i++)
    {
        l = l * nums[i];
        r = r * nums[n-1-i];
        res = max(res, max(l, r));
        if(l==0)
            l=1;
        if(r==0)
            r=1;
    }
    return res;
}
int main() 
{
    vector<int> vec = {2,3,-2,4};
    cout << maxProduct(vec);

    return 0;
}