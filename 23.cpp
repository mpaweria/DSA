// https://leetcode.com/problems/number-of-good-pairs/

#include<iostream>
#include<vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]==nums[j])
                count++;
        }
    }
    return count;
}
int main()
{
    vector<int> vec = {1,2,3};
    cout << numIdenticalPairs(vec);

    return 0;
}