//  https://leetcode.com/problems/build-array-from-permutation/

#include<iostream>
#include<vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans(nums.size(), 0);
    for(int i=0; i<nums.size(); i++)
    {
        ans[i]=nums[nums[i]];
    }        
    return ans;
}
int main()
{
    vector<int> vec = {5,0,1,2,3,4}, ans = buildArray(vec);

    for(auto i: ans)
    { 
        cout << i << " ";
    }
    return 0;
}