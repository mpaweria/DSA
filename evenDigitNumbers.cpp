//  https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

#include<iostream>
#include<vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count=0;
    for(int i=0; i<nums.size(); i++)
    {
        int digit=0;
        while(nums[i]>0)
        {
            nums[i]/=10;
            digit++;
        }
        if(digit%2==0)
            count++;
    }        
    return count;
}
int main() {
    vector<int> vec = {12,345,2,6,7896};
    cout << findNumbers(vec);

    return 0;
}