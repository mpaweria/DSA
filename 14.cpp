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
        if(side[i]>max)
        {
            max=side[i];
            count = 1;
        }
        else if(max==side[i])
            count++;
    }
    return count;
}

int main()
{
    vector<vector<int>> vec = {{5,8},{3,9},{5,12},{16,5}};
    cout << countGoodRectangles(vec);
    return 0;
}

// int countGoodRectangles(vector<vector<int>>& rectangles) {
//     vector<int> array;
//     for(int i=0; i<rectangles.size(); i++)
//     {
//         int small = 99999;
//         for(int j=0; j<rectangles[i].size(); j++)
//         {
//             if(rectangles[i][j] < small)
//                 small=rectangles[i][j];
//         }
//         array.push_back(small);
//     }
//     int max=array[0], count = 0;
//     for(auto i: array)
//     {
//         if(max<i)
//             max=i;
//     }
//     for(auto i: array)
//     {
//         if(i==max)
//             count++;
//     }
//     return count;
// }