//  https://leetcode.com/problems/find-target-indices-after-sorting-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> ans;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==target)
            ans.push_back(i);
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
    vector<int> vec = {1,2,5,2,3};
    printArray(targetIndices(vec, 2));

    return 0;
}