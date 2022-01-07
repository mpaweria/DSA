//  https://leetcode.com/problems/search-in-rotated-sorted-array/

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size()-1;

    while (start <= end)
    {
        int mid = (start+end)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[start] <= nums[mid])
        {
            if(nums[start] <= target && nums[mid] >= target)
                end = mid-1;
            else
                start = mid+1;
        }
        else
            if(nums[end] >= target && nums[mid] <= target)
                start = mid+1;
            else
                end = mid-1;
    }
    return -1;
}
int main()
{
    vector<int> vec = {4,5,6,7,0,1,2};

    cout << search(vec, 0);

    return 0;
}