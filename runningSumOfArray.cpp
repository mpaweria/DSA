//  https://leetcode.com/problems/running-sum-of-1d-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> arr = nums;
    int sum=0;
    for(int i=1; i<nums.size(); i++)
    {
        arr[i] = arr[i]+arr[i-1];
    }        
    return arr;
}
int main()
{
    vector<int> arr = {1,2,3,4};
    vector<int> ans = runningSum(arr);

    for(auto v: ans)
    {
        cout << v << endl;
    }
    return 0;
}