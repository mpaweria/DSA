//  https://leetcode.com/problems/find-the-duplicate-number/

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int n = nums.size(), s = 0, e = n-1;
    while (s <= e)
    {
        int mid = (s+e)/2;
        int count = 0;
        for(int i: nums)
        {
            if(i <= mid)
                count++;
        }
        if(count <= mid)
            s = mid+1;
        else
            e = mid-1;
    }
    return s;
}
int main()
{
    vector<int> vec = {1,3,4,2,3};
    cout << findDuplicate(vec);

    return 0;
}
// int findDuplicate(vector<int>& nums) {
//     vector<int> vec(nums.size(), 0);

//     for(int i=0; i<nums.size(); i++)
//     {
//         if(vec[nums[i]]==0)
//             vec[nums[i]]=1;
//         else
//             return nums[i];
//     }        
//     return -1;
// }