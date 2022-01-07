//  https://leetcode.com/problems/array-nesting/

#include<iostream>
#include<vector>
using namespace std;

int arrayNesting(vector<int>& nums) {
    int max = 0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] != -1)
        {
            int x=i, c=0;
            while (nums[x] != -1)
            {
                int t = nums[x];
                nums[x] = -1;
                x = t;
                c++;
            }
            if(c > max)
                max = c;
        }
    }        
    return max;
}

int main()
{
    vector<int> vec = {5,4,0,3,1,6,2};
    cout << arrayNesting(vec);
    
    return 0;
}