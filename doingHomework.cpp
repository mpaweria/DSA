//  https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/

#include<iostream>
#include<vector>
using namespace std;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int count=0;
    for(int i=0; i<startTime.size(); i++)
    {
        if(queryTime >= startTime[i] && queryTime <= endTime[i])
            count++;
    }  
    return count;      
}
int main()
{
    vector<int> start = {1,2,3}, end = {3,2,7};
    int time = 4;

    cout << busyStudent(start, end, time);

    return 0;
}

// int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
//     int students = 0;
//     for(int i=0; i<startTime.size(); i++)
//     {
//         if(queryTime >= startTime[i] && queryTime <= endTime[i])
//             students++;
//     }
//     return students;
// }