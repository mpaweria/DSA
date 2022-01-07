//  https://leetcode.com/problems/largest-number/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
    string s1 = to_string(a), s2 = to_string(b);

    return s1+s2 > s2+s1;
}
string largestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), compare);

    if(nums[0] == 0)
        return "0";

    string ans;

    for(auto i: nums)
        ans += to_string(i);

    return ans;
}
int main()
{
    vector<int> vec = {3,30,34,5,9};

    cout << largestNumber(vec);

    return 0;
}