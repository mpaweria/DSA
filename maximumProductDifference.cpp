//  https://leetcode.com/problems/maximum-product-difference-between-two-pairs/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int product=0, n=nums.size();
    product = (nums[n-1]*nums[n-2]) - (nums[1]*nums[0]);

    return product;
}

int main()
{
    vector<int> vec = {5,6,2,7,4};
    cout << maxProductDifference(vec);
}
// int maxProductDifference(vector<int>& nums) {
//     int max=nums[0], min=100000, product=0;
//     for(int i=0; i<nums.size(); i++)
//     {
//         for(int j=0; j<nums.size(); j++)
//         {
//             if(i!=j)
//             {
//                 product = nums[i]*nums[j];
//                 if(product>max)
//                     max=product;
//                 if(product<min)
//                     min=product;
//             }
//         }
//     }
//     return max-min;
// }