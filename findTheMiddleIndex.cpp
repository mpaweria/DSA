//  https://leetcode.com/problems/find-the-middle-index-in-array/

#include<iostream>
#include<vector>
using namespace std;

int findMiddleIndex(vector<int>& nums) {
    int prefixSum = 0;
    for(int i=0; i<nums.size(); i++)
    {
        prefixSum += nums[i];
    }
    int leftSum = 0, rightSum = prefixSum;
    for(int i=0; i<nums.size(); i++)
    {
        rightSum -= nums[i];
        if(leftSum == rightSum)
            return i;
        leftSum += nums[i];
    }
    return -1;
}
int main()
{
    vector<int> vec = {2,3,-1,8,4};
    cout << findMiddleIndex(vec);

    return 0;
}