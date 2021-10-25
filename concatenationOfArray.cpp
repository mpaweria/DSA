//  https://leetcode.com/problems/concatenation-of-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n*2, 0);
    for(int i=0; i<n; i++)
    {
        ans[i] = nums[i];
        ans[i+n] = nums[i];
    }          
    return ans;     
}
int main()
{
    vector<int> vec = {1,2,1}, ans = getConcatenation(vec);

    for(auto i: ans)
    { 
        cout << i << " ";
    }
    return 0;
}