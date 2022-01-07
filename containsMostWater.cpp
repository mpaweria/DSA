//  https://leetcode.com/problems/container-with-most-water/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int area=0, h1=0, h2=height.size()-1;

    while (h1<h2)
    {
        int dis = h2-h1, len = min(height[h1], height[h2]);
        area = max(area, dis * len);
        if(height[h1] < height[h2])
            h1++;
        else
            h2--;
    }
    return area;
}
int main() 
{
    vector<int> vec = {4,3,2,1,4};
    cout << maxArea(vec);

    return 0;
}