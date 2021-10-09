//  https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> vec;
    for(int i=0; i<nums.size(); i++)
    {
        int pos=abs(nums[i])-1;

        if(nums[pos]<0)
            vec.push_back(abs(nums[i]));
        else
            nums[pos]*=-1;
    }
    return vec;
}
void printArray(vector<int> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<int> vec = {4,3,2,7,8,2,3,1};
    printArray(findDuplicates(vec));

    return 0;
}