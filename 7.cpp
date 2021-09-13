#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//  My Version

// int maxWidthOfVerticalArea(vector<vector<int>>& points) {
//     vector<int> vec;
//     for(int i=0; i<points.size(); i++)
//     {
//         for(int j=0; j<points[i].size(); j++)
//         {
//             vec.push_back(points[i][j]);
//             break;
//         }
//     }
//     sort(vec.begin(), vec.end());
    
//     int diff=0;
//     for(int i=1; i<vec.size(); i++)
//     {
//         if(diff<vec[i]-vec[i-1])
//             diff=vec[i]-vec[i-1];
//     }
//     return diff;
// }

int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    int width=0;
    sort(points.begin(), points.end());
    for(int i=1; i<points.size(); i++)
    {
        if(width < points[i][0]-points[i-1][0])
            width = points[i][0]-points[i-1][0];
    }
    return width;
}

int main()
{
    vector<vector<int>> vec2 = {{8,7},{9,9},{7,4},{9,7}};
    cout << maxWidthOfVerticalArea(vec2);
    return 0;
}