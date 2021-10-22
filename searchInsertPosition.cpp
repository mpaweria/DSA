//  https://leetcode.com/problems/search-insert-position/

#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int s=0, e=nums.size()-1, mid;
    while (s<=e)
    {
        mid = (s+e)/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }        
    return s;
}
int main() {
    vector<int> vec = {1,3,5,6};
    cout << searchInsert(vec, 2);

    return 0;
}