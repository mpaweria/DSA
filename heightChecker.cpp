//  https://leetcode.com/problems/height-checker/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> vec = heights;
    int count=0;
    sort(vec.begin(), vec.end());
    for(int i=0; i<heights.size(); i++)
    {
        if(vec[i] != heights[i])
            count++;
    }
    return count;
}
int main()
{
    vector<int> vec = {1,1,4,2,1,3};
    cout << heightChecker(vec);

    return 0;
}