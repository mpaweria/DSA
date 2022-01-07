// https://leetcode.com/problems/trapping-rain-water/

#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
    int left=0, right=height.size()-1, leftMax=0, rightMax=0, water=0;

    while (left < right)
    {
        if(height[left] < height[right])
        {
            if(height[left] > leftMax)
                leftMax = height[left];
            else
                water += leftMax-height[left];
            left++;
        }
        else
        {
            if(height[right] > rightMax)
                rightMax = height[right];
            else
                water += rightMax-height[right];
            right--;
        }
    }
    return water;
}
int main()
{
    vector<int> vec = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(vec);

    return 0;
}