#include<iostream>
#include<vector>
using namespace std;

//  My Version

// int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
//     int students = 0;
//     for(int i=0; i<startTime.size(); i++)
//     {
//         for(int j=startTime[i]; j<=endTime[i]; j++)
//         {
//             if(j == queryTime)
//                 students++;
//         }
//     }
//     return students;
// }

//  Better Version

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int students = 0;
    for(int i=0; i<startTime.size(); i++)
    {
        if(queryTime >= startTime[i] && queryTime <= endTime[i])
            students++;
    }
    return students;
}

int main()
{
    vector<int> start = {1,2,3}, end = {3,2,7};
    int time = 4;

    cout << busyStudent(start, end, time);

    return 0;
}