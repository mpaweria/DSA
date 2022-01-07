//  https://leetcode.com/problems/single-element-in-a-sorted-array/

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums)
{
    int s=0, e=nums.size()-1, mid;
    while (s<=e)
    {
        mid = (s+e)/2;
        if(s==e)
            return nums[mid];
        else if(mid%2==0)
        {
            if(nums[mid]==nums[mid+1])
                s=mid+2;
            else
                e=mid;
        }
        else
        {
            if(nums[mid]==nums[mid-1])
                s=mid+1;
            else 
                e=mid-1;
        }
    }
    return 0;
}
int main()
{
    vector<int> vec = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(vec);

    return 0;
}

//  O(log n)
// int singleNonDuplicate(vector<int>& nums)
// {
//     int i=0, j=nums.size()-1;
//     while (i<j)
//     {
//         if(nums[i]==nums[i+1])
//             i+=2;
//         if(nums[j]==nums[j-1])
//             j-=2;
//         if(nums[i]!=nums[i+1])
//             return nums[i];
//         if(nums[j]!=nums[j-1])
//             return nums[j];
//     }
//     return -1;
// }

//  O(n) ig
// int singleNonDuplicate(vector<int>& nums) {
//     int index=0;
//     for(int i=0; i<nums.size(); i++)
//     {
//         if(i==0 && nums[i]!=nums[i+1])
//             return nums[i];
//         else if(i==nums.size()-1 && nums[i]!=nums[i-1])
//             return nums[i];
//         else if(nums[i]==nums[i-1] || nums[i]==nums[i+1])
//             continue;
//         else
//             index = nums[i];
//     }        
//     return index;
// }