// https://leetcode.com/problems/concatenation-of-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(2*nums.size(), 0);

    for(int i=0; i<nums.size(); i++)
    {
        ans[i]=nums[i];
        ans[i+nums.size()]=nums[i];
    }
    return ans;       
}
int main()
{
    vector<int> vec = {1,2,1}, ans = getConcatenation(vec);

    for(auto i: ans)
    { 
        cout << i << " ";
    }
    return 0;
}