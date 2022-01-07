//  https://leetcode.com/problems/3sum-closest

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    
    int closestSum = 1000000000, sum=0;       

    for(int i=0; i<nums.size()-2; i++) 
    {
        int left = i+1, right = nums.size()-1;

        while (left < right)
        {
            sum = nums[i] + nums[left] + nums[right];

            if(sum == target)
                return sum;

            if(abs(target - closestSum) > abs(target - sum))
                closestSum = sum;

            if(sum > target)
                right--;
            else
                left++;
        }
    }
    return closestSum;
}
int main()
{
    vector<int> vec = {-1,2,1,-4};
    cout << threeSumClosest(vec, 1);

    return 0;
}