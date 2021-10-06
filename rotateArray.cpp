//  https://leetcode.com/problems/rotate-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotate(vector<int>& nums, int k) {
    vector<int> v(nums.size(), 0);
    for(int i=0; i<nums.size(); i++)
    {
        v[(i+k)%nums.size()]=nums[i];
    }
    copy(v.begin(), v.end(), nums.begin());

    return nums;
}
void printArray(vector<int> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<int> vec = {-1,-100,3,99};
    printArray(rotate(vec, 2));

    return 0;
}

// not working with very large numbers

// vector<int> rotate(vector<int>& nums, int k) {
//     int last = nums.size()-1;
//     while (k>0)
//     {
//         nums.insert(nums.begin(), nums[last]);
//         nums.pop_back();
//         k--;
//     }
//     return nums;
// }

// another approach

// k=k%nums.size(); 
//     if(k==0) return nums;
        
//     reverse(nums.begin(),nums.end());
//     reverse(nums.begin(),nums.begin()+k);
//     reverse(nums.begin()+k,nums.end());