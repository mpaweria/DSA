//  https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> flag(nums.size()+1, 0);
    for(int i=0; i<nums.size(); i++)
    {
        flag[nums[i]]=1;
    }
    nums.clear();
    for(int i=1; i<flag.size(); i++)
    {
        if(flag[i]!=1)
            nums.push_back(i);
    }
    return nums;
}

int main()
{
    vector<int> vec={1,1}, ans=findDisappearedNumbers(vec);
    for(auto i: ans)
    {
        cout << i << " ";
    }
    return 0;
}

// Works for small vectors only, because time complexity is O(n^2)

// vector<int> findDisappearedNumbers(vector<int>& nums) {
//     vector<int> vec;
//     for(int i=1; i<=nums.size(); i++)
//     {
//         for(int j=0; j<nums.size(); j++)
//         {
//             if(nums[j]==i)
//                 break;
                
//             if(j==nums.size()-1)
//                 vec.push_back(i);
//         }
//     }
//     return vec;
// }