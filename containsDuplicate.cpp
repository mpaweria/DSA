//  https://leetcode.com/problems/contains-duplicate/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    bool flag = false;
    for(int i=0; i<nums.size()-1; i++)        
    {
        if(nums[i]==nums[i+1])
        {
            flag = true;
            break;
        }
    }
    return flag;
}
int main()
{
    vector<int> vec = {1,2,3,4,4};
    cout << containsDuplicate(vec);

    return 0;
}