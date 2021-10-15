//  https://leetcode.com/problems/decompress-run-length-encoded-list/

#include<iostream>
#include<vector>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> vec;
    for(int i=0; i<nums.size()-1; i+=2)
    {
        while (nums[i]--)
        {
            vec.push_back(nums[i+1]);
        }
    }        
    return vec;
}
void print(vector<int> vec)
{
    for(auto v: vec)
        cout << v << " ";
}
int main()
{
    vector<int> num = {1,1,2,3};
    print(decompressRLElist(num));

    return 0;
}