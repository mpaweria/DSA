//  https://leetcode.com/problems/sort-array-by-parity/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int j=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]%2==0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }        
    return nums;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec = {3,1,2,4,5,6};
    printArray(sortArrayByParity(vec));

    return 0;
}