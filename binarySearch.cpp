//  https://leetcode.com/problems/binary-search/

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int s=0, e=nums.size()-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }
    return -1;
}
int main() {
    vector<int> a = {1, 3, 5, 10, 14, 16, 20, 35, 56, 78, 99};
    int result = search(a, 20);
    cout << "Result: " << result << endl;
}

// This is binary search, its time complexity is O(n) Linear Time Complexity. It works only in sorted arrays either
// either strictly ascending or descending.