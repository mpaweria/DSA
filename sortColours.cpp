//  https://leetcode.com/problems/sort-colors/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    bool swapped;
    for(int i=0; i<n-1; i++)
    {
        swapped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec = {2,0,2,1,1,0};
    sortColors(vec);
    printArray(vec);

    return 0;
}