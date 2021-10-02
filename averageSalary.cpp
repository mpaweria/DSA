//  https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/

#include<iostream>
#include<vector>
using namespace std;

double average(vector<int>& salary) {
    int max=salary[0], min=salary[0];
    double avg=0, sum=0;
    for(int i=0; i<salary.size(); i++)
    {
        sum+=salary[i];
        if(min>salary[i])   min=salary[i];
        if(max<salary[i])   max=salary[i];
    }
    
    avg=(sum-(max+min))/(salary.size()-2);

    return avg;
}
int main()
{
    vector<int> vec= {4000,3000,1000,2000};
    cout << average(vec);

    return 0;
}

// double average(vector<int>& salary) {
//     int max=salary[0], min=salary[0];
//     double avg=0, sum=0;
//     for(int i=0; i<salary.size(); i++)
//     {
//         if(min>salary[i])   min=salary[i];
//         if(max<salary[i])   max=salary[i];
//     }
//     for(int i=0; i<salary.size(); i++)
//     {
//         if(salary[i]!=min && salary[i]!=max)
//             sum+=salary[i];
//     }
//     avg=sum/(salary.size()-2);
//     return avg;
// }