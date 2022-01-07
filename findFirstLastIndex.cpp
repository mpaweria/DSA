//  //  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int s=0, e=nums.size()-1;
    vector<int> ans{-1,-1};
    while(s<=e)
    {
        int mid = (s+e)/2;
        
        if(nums[mid]==target)
        {
            ans[0]=mid;
            e = mid-1;
        }
        else if(nums[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }
    s=0, e=nums.size()-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        
        if(nums[mid]==target)
        {
            ans[1]=mid;
            s = mid+1;
        }
        else if(nums[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }
    return ans;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec = {5,7,7,8,8,10};
    printArray(searchRange(vec, 8));

    return 0;
}