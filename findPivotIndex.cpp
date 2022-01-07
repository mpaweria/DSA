//  https://leetcode.com/problems/find-pivot-index/

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
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
    vector<int> vec = {1,7,3,6,5,6};
    cout << pivotIndex(vec);

    return 0;
}
// int pivotIndex(vector<int>& nums) {
//     vector<int> vec(nums.size(), 0);
//     vec[0]=nums[0];
//     for(int i=1; i<nums.size(); i++)
//     {
//         vec[i] = vec[i-1] + nums[i];
//     }
//     for(int i=0; i<nums.size(); i++)
//     {
//         if(vec[i]-nums[i] == vec[nums.size()-1]-vec[i])
//             return i;
//     }
//     return -1;
// }