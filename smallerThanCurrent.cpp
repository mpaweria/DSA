//  https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> vec;
    int count;
    for(int i=0; i<nums.size(); i++)
    {
        count = 0;
        for(int j=0; j<nums.size(); j++)
        {
            if(i!=j && nums[i] > nums[j])
                count++;
        }
        vec.push_back(count);
    }

    return vec;
}
int main()
{
    vector<int> vec = {7,1,5,2,3}, ans = smallerNumbersThanCurrent(vec);

    for(auto i: ans)
    { 
        cout << i << " ";
    }
    return 0;
}