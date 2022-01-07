//  https://leetcode.com/problems/4sum

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> vec;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=0; i<n-3; i++)
    {
        if(i==0 || i>0 && nums[i] != nums[i-1])
        {
            int a=i;

            for(int j=a+1; j<n-2; j++)
            {
                if(j==a+1 || j>1 && nums[j] != nums[j-1])
                {
                    int b=j, c=j+1, d=n-1;

                    while (c<d)
                    {
                        long long int sum = 1ll*(nums[a]) + 1ll*(nums[b]) + 1ll*(nums[c]) + 1ll*(nums[d]);

                        if(sum == target)
                        {
                            vec.push_back({nums[a], nums[b], nums[c], nums[d]});

                            while (c<d && nums[c] == nums[c+1])
                                c++;
                            while (c<d && nums[d] == nums[d-1])
                                d--;

                            c++;
                            d--;
                        }
                        else if(sum > target)
                            d--;
                        else 
                            c++;   
                    }                 
                }
            }
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
    vector<int> vec = {1,0,-1,0,-2,2};
    print(fourSum(vec, 0));

    return 0;
}