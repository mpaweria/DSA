//  https://leetcode.com/problems/merge-sorted-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i=0; i<n; i++)
    {
        nums1[i+m] = nums2[i];
    }        
    sort(nums1.begin(), nums1.end());
    return nums1;
}
void printArray(vector<int> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<int> vec1 = {1,2,3,0,0,0}, vec2 = {2,5,6};
    printArray(merge(vec1, 3, vec2, 3));

    return 0;
}