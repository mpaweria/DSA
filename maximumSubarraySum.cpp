//  https://leetcode.com/problems/maximum-subarray/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currSum = 0, maxSum =nums[0];
    for(int i=0; i<nums.size(); i++)
    {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}
int main() 
{
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(vec);

    return 0;
}
// int maxSubArray(vector<int>& nums) {
//     int currSum = 0, maxSum =nums[0];
//     for(int i=0; i<nums.size(); i++)
//     {
//         currSum = max(nums[i], nums[i]+currSum);
//         maxSum = max(currSum, maxSum);
//     }
//     return maxSum;
// }