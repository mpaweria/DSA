//  https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    int p=1;
    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i]!=nums[i-1])
        {
            nums[p]=nums[i];
            p++;
        }
    }        
    return p;
}

int main()
{
    vector<int> vec = {0,2,3,3,4,5,5,8,9};
    cout << removeDuplicates(vec);

    return 0;
}