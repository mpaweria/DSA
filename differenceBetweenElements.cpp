//  https://leetcode.com/problems/maximum-difference-between-increasing-elements/

#include<iostream>
#include<vector>
using namespace std;

int maximumDifference(vector<int>& nums) {
    int diff=0, maxDiff=-1, num=nums[0];

    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i] > num)
        {
            diff = nums[i]-num;
            maxDiff = (maxDiff < diff) ? diff : maxDiff;
        }
        else
            num = nums[i];
    }
    return maxDiff;
}
int main() {
    vector<int> vec = {1,5,2,10};
    cout << maximumDifference(vec);

    return 0;
}