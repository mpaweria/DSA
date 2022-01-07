//  https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersection;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i=0, j=0;
    while (i<nums1.size() && j<nums2.size())
    {
        if(nums1[i]==nums2[j])
        {
            intersection.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j])
            i++;
        else
            j++;
    }
    return intersection;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() 
{
    vector<int> vec1 = {4,9,5}, vec2 = {9,4,9,8,4};
    printArray(intersect(vec1, vec2));

    return 0;
}