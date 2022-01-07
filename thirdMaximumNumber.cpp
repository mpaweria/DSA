//  https://leetcode.com/problems/third-maximum-number/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    bool flag = false;
    for(int i=0; i<nums.size(); i++)
    {
        if(first < nums[i])
        {
            third = second;
            second = first;
            first = nums[i];
        }
        else if(first > nums[i] && second < nums[i])
        {
            third = second;
            second = nums[i];
        }
        else if(second > nums[i] && third < nums[i])
        {
            third = nums[i];
        }
        
        if(nums[i] == INT_MIN)
            flag = true;
    }
    if(flag)
    { 
        if(first != second && second != third)
            return third;
        return first;
    }
    if(third == INT_MIN)
        return first;
    return third;
}
int main()
{
    vector<int> vec = {2,2,3,1};
    cout << thirdMax(vec);

    return 0;
}