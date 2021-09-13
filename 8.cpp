#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> targetArray;
    for(int i=0; i<index.size(); i++)
    {
        // begin() function is neccessary to use with insert() as it gives the initial position for the pointer.
        targetArray.insert(targetArray.begin()+index[i], nums[i]);
    }
    return targetArray;
}
void print(vector<int> vec)
{
    for(auto v: vec)
        cout << v << endl;
}
int main()
{
    vector<int> num = {0,1,2,3,4}, index={0,1,2,2,1};
    print(createTargetArray(num, index));

    return 0;
}

