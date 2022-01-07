//  https://leetcode.com/problems/sign-of-the-product-of-an-array/

#include<iostream>
#include<vector>
using namespace std;

int arraySign(vector<int>& nums) {
    int sign=1;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] == 0)
            return 0;
        if(nums[i] < 0)
            sign *= -1;
    }
    return sign;
}
int main() {
    vector<int> vec = {-1,1,-1,1,-1};
    cout << arraySign(vec);

    return 0;
}