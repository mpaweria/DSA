//  https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

#include<iostream>
#include<vector>
using namespace std;

bool canThreePartsEqualSum(vector<int>& arr) {
    int totalSum=0, part=0, sum=0;
    for(int i=0; i<arr.size(); i++)
    {
        totalSum+=arr[i];
    }        
    if(totalSum%3 != 0)         // to have 3 parts with equal sum, the total sum should be completely divisible by 3.
        return false;
    
    totalSum/=3;                // sum of each part.

    for(int i=0; i<arr.size(); i++)
    {
        sum+=arr[i];

        if(sum==totalSum)
        {
            part++;
            sum=0;
        }
    }
    return part>=3;         // >= because for array like [0,0,0,0] part can be more than 3, as rather than adding 0 and 0 it will increase part. 
}
int main() {
    vector<int> vec = {3,3,6,5,-2,2,5,1,-9,4};
    // vector<int> vec = {0,0,0,0};
    cout << canThreePartsEqualSum(vec);

    return 0;
}