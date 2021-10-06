//  https://leetcode.com/problems/squares-of-a-sorted-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int a=0, b=nums.size()-1, counter=nums.size()-1;
    vector<int> ans(nums.size(), 0);

    while(a!=b)
    {
        int aSquare = nums[a]*nums[a], bSquare = nums[b]*nums[b];

        if(aSquare < bSquare)
        {
            ans[counter]=bSquare;
            b--;
        }
        else 
        {
            ans[counter]=aSquare;
            a++;
        }
        counter--;
    }
    ans[0]=nums[a]*nums[a];

    return ans;
}

void printArray(vector<int> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<int> vec = {-7,-3,2,3,11};
    printArray(sortedSquares(vec));

    return 0;
}

// Trivial
// vector<int> sortedSquares(vector<int>& nums) {
//     for(int i=0; i<nums.size(); i++)
//     {
//         nums[i]=nums[i]*nums[i];
//     }        
//     sort(nums.begin(), nums.end());
//     return nums;
// }