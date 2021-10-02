//  https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/

#include<iostream>
#include<vector>
using namespace std;

int findGCD(vector<int>& nums) {
    int smallest=nums[0], largest=nums[0], gcd=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(smallest>nums[i])
            smallest=nums[i];
        if(largest<nums[i])
            largest=nums[i];
    }
    for(int i=smallest; i>0; i--)
    {
        if(smallest%i==0 && largest%i==0)
        {
            gcd=i;
            break;
        }
    }
    return gcd;
}

int main()
{
    vector<int> vec = {2,5,6,9,10};
    cout << findGCD(vec);

    return 0;
}

// int gcd(int a, int b)
// {
//     if(b==0)
//         return a;
//     else
//         return gcd(b, a%b);
// }
// int findGCD(vector<int>& nums) {
//     int smallest=nums[0], largest=nums[0];
//     for(int i=0; i<nums.size(); i++)
//     {
//         if(smallest>nums[i])
//             smallest=nums[i];
//         if(largest<nums[i])
//             largest=nums[i];
//     }
//     return gcd(largest, smallest);
// }