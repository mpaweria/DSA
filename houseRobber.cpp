//  https://leetcode.com/problems/house-robber/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rob(vector<int>& nums) {
    if(nums.size()==1)
        return nums[0];
    vector<int> res(nums.size(), 0);
    res[0] = nums[0];
    res[1] = max(nums[0], nums[1]);

    for(int i=2; i<nums.size(); i++)
    {
        res[i] = max(res[i-1], res[i-2] + nums[i]);
    }
    return res[nums.size()-1];
}
int main()
{
    vector<int> vec = {2,1,1,2};
    cout << rob(vec);

    return 0;
}
// int rob(vector<int>& nums) {
//     int amount1 = 0, amount2 = 0;

//     for(int i=0; i<nums.size(); i++)
//     {
//         amount1 += nums[i];
//         if(i<nums.size()-1)
//         {
//             i++;
//             amount2 += nums[i];
//         }
//     }
//     return max(amount1, amount2);
// }