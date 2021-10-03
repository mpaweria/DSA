//  https://leetcode.com/problems/create-target-array-in-the-given-order/

#include<iostream>
#include<vector>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> target;
    for(int i=0; i<nums.size(); i++)
    {
        // .begin() is necessary to use to give starting pointer.
        target.insert(target.begin() + index[i], nums[i]);
    }        
    return target;
}
void print(vector<int> vec)
{
    for(auto v: vec)
        cout << v << endl;
}
int main()
{
    vector<int> num = {1,2,3,4,0}, index={0,1,2,3,0};
    print(createTargetArray(num, index));

    return 0;
}