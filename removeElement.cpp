//  https://leetcode.com/problems/remove-element/

#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int p=0, count=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==val)
            continue;
        else
        {
            nums[p]=nums[i];
            p++;
        }
    } 
    count=p;       
    while (p<nums.size())
    {
        nums[p]=0;
        p++;
    }
    return count;
}
int main()
{
    vector<int> vec = {0,1,2,2,3,0,4,2};
    cout << removeElement(vec, 2);

    return 0;
}