//  https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for(int i=0; i<nums.size()-1; i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }        
    return ans;
}
int main()
{
    int num = 9;
    vector<int> vec = {2,7,11,15}, ans=twoSum(vec, num);

    for(auto v: ans)
    {
        cout << v;
    }

    return 0;
}