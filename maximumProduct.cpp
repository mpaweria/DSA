//  https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    int n=nums.size()-1;
    sort(nums.begin(), nums.end());
    
    return (nums[n]-1) * (nums[n-1]-1);
}
int main () {
    vector<int> vec={3,4,5,2};
    cout << maxProduct(vec);

    return 0;
}