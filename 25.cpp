// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/

#include<iostream>
#include<vector>
using namespace std;

int countKDifference(vector<int>& nums, int k) {
    int count=0;
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]-nums[j]==k || nums[i]-nums[j]==-k)
                count++;
        }
    }        
    return count;
}
int main()
{
    vector<int> vec={3,2,1,5,4};
    int val = 2;

    cout << countKDifference(vec, val);

    return 0;
}