//  https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    sort(points.begin(), points.end());
    int width=0;
    for(int i=0; i<points.size()-1; i++)
    {
        if(width < points[i+1][0]-points[i][0])
            width = points[i+1][0]-points[i][0];
    }
    return width;
}

int main()
{
    vector<vector<int>> vec = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};
    cout << maxWidthOfVerticalArea(vec);

    return 0;
}

// int maxWidthOfVerticalArea(vector<vector<int>>& points) {
//     vector<int> axisX;
//     int max=0;
//     for(int i=0; i<points.size(); i++)
//     {
//         axisX.push_back(points[i][0]);
//     }
//     sort(axisX.begin(), axisX.end());
    
//     for(int i=0; i<axisX.size()-1; i++)
//     {
//         if(max<axisX[i+1]-axisX[i])
//             max=axisX[i+1]-axisX[i];
//     }
//     return max;
// }