//  https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

#include<iostream>
#include<vector>
using namespace std;

int countGoodRectangles(vector<vector<int>>& rectangles) {
    vector<int> side;
    for(int i=0; i<rectangles.size(); i++)
    {
        side.push_back(min(rectangles[i][0], rectangles[i][1]));
    }        
    int count=0, max=0;
    for(int i=0; i<side.size(); i++)
    {
        if(max<side[i])
        {
            max=side[i];
            count=1;
        }
        else if(max==side[i])
            count++;
    }

    return count;
}
int main()
{
    vector<vector<int>> vec = {{2,3},{3,7},{4,3},{3,7}};
    cout << countGoodRectangles(vec);
}