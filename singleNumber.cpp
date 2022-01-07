//  https://leetcode.com/problems/single-number/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i]!=nums[i+1])
            return nums[i];
        i++;
    }       
    return nums[nums.size()-1]; 
}
int main() 
{
    vector<int> vec = {4,1,2,1,2};
    cout << singleNumber(vec);

    return 0;
}