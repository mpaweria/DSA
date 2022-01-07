//  https://leetcode.com/problems/next-permutation/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

void nextPermutation(vector<int>& nums) {
    int n = nums.size();

    if(n==0 || n==1)
        return;

    int i = n-2;
    while (i>=0)
    {
        if(nums[i] >= nums[i+1])
        {
            i--;
            continue;
        }
        int num = nums[i], j=n-1;

        while (j>i && nums[j] <= num)
        {
            j--;
        }
        swap(nums[i], nums[j]);
        break;

        i--;
    }
    int s = i+1, e = n-1;
    while (s<e)
    {
        swap(nums[s++], nums[e--]);
    }    
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec = {1,3,2};
    nextPermutation(vec);
    printArray(vec);

    return 0;
}
