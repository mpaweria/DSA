//  https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

#include<iostream>
#include<vector>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int sum=0;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i; j<arr.size(); j++)
        {
            if((j-i)%2==0)
            {
                for(int k=i; k<=j; k++)
                {
                    sum+=arr[k];
                }
            }
        }
    }        
    return sum;
}

int main() {
    vector<int> vec = {10, 11, 12};
    cout << sumOddLengthSubarrays(vec);

    return 0;
}