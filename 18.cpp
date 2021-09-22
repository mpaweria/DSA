// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include<iostream>
#include<vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> smallnums; 
    for(int i=0; i<nums.size(); i++)
    {
        int count = 0;
        for(int j=0; j<nums.size(); j++)
        {
            if(nums[i]>nums[j])
                count++;
        }
        smallnums.push_back(count);
    }        
    return smallnums;
}

int main()
{
    vector<int> vec = {7,7,7,7}, ans = smallerNumbersThanCurrent(vec);

    for(auto i: ans)
    { 
        cout << i << " ";
    }
    return 0;
}