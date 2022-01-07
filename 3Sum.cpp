//  https://leetcode.com/problems/3sum/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;

        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i] == nums[i-1])
                continue;

            int s = i+1, e = nums.size()-1;

            while (s < e)
            {
                if(s > i+1 && nums[s] == nums[s-1])
                {
                    s++;
                    continue;
                }
                if(e < nums.size()-1 && nums[e] == nums[e+1])
                {
                    e--;
                    continue;
                }
                if(nums[i]+nums[s]+nums[e] == 0)
                {
                    vec.push_back({nums[i], nums[s], nums[e]});
                    s++; 
                    e--;
                    continue;
                }

                if((nums[e]+nums[s]+nums[i]) > 0)
                    e--;
                else
                    s++;
            }
        }
        return vec;
    }

void print(vector<vector<int>> vec)
{
    for(auto i: vec)
    {
        for(auto j: i)
            cout << j << " ";
        cout << endl;
    }
}
int main()
{
    vector<int> vec = {-1,0,1,2,-1,-4};
    print(threeSum(vec));

    return 0;
}

// giving TLE

// vector<vector<int>> threeSum(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> vec;
//     for(int i=0; i<nums.size()-2; i++)
//     {
//         if(i>0 && nums[i] == nums[i-1])
//                 continue;

//         int left = i+1, right = nums.size()-1;
        
//         while (left < right)
//         {
//             int sum = nums[left] + nums[right] + nums[i];
//             if(left > i+1 && nums[left] == nums[left-1])
//             {
//                 left++;
//                 continue;
//             }
//             if(right < nums.size()-1 && nums[right] == nums[right+1])
//             {
//                 right--;
//                 continue;
//             }

//             if(sum == 0)
//             {
//                 vec.push_back({nums[i], nums[left], nums[right]});
//                 left++;
//                 right--;
//             }
//             else if(sum > 0)
//                 right--;
//             else
//                 left--;
//         }
//     }
//     return vec;
// }