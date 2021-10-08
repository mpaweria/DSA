//  https://leetcode.com/problems/move-zeroes/

#include<iostream>
#include<vector>
using namespace std;

vector<int> moveZeroes(vector<int>& nums) {
    int p=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]!=0)
        {
            nums[p]=nums[i];
            p++;
        }
    }
    while(p<nums.size())
    {
        nums[p]=0;
        p++;
    }
    return nums;
}
void printArray(vector<int> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<int> vec = {0,1,0,3,12};
    printArray(moveZeroes(vec));

    return 0;
}