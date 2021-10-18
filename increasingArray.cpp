//  https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/

#include<iostream>
#include<vector>
using namespace std;

bool canBeIncreasing(vector<int>& nums) {
    int count = 0, index=0;
    for(int  i=1; i<nums.size(); i++)
    {
        if(nums[i] <= nums[i-1])
        {
            count++;
            index=i;
        }
    }
    if(count > 1)
        return false;

    // if no element is removed
    if(count == 0)
        return true;

    // if first or last element is removed
    if(index == nums.size()-1 || index == 1)
        return true;
    
    // if index element is removed
    if(nums[index-1] < nums[index+1])
        return true;

    // if index-1 element is removed
    if(nums[index-2] < nums[index])
        return true;

    return false;
}
int main() {
    vector<int> vec = {1,2,10,3,5};
    cout << canBeIncreasing(vec);

    return 0;
}