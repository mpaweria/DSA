// //   https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vec;
    for(int i=0; i<nums.size()-1; i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j]==target)
            {
                vec.push_back(i);
                vec.push_back(j);
                break;
            }
        }
    }
    return vec;
}
int main()
{
    int num = 6;
    vector<int> vec = {3,4}, ans=twoSum(vec, num);

    for(auto v: ans)
    {
        cout << v;
    }

    return 0;
}