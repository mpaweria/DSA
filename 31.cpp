//  https://leetcode.com/problems/sum-of-square-numbers/

#include<iostream>
#include<cmath>
using namespace std;

// TLE for big number because tim complexity is O(n^2)
// bool judgeSquareSum(int c) {
//     for(int i=0; i<=c; i++)
//     {
//         for(int j=i; j<=c; j++)
//         {
//             if(i*i + j*j == c)
//             {
//                 cout << i << " " << j;
//                 return true;
//             }
//         }
//     }        
//     return false;
// }

bool judgeSquareSum(int c) {
    long long int start=0, end=pow(c, 0.5);
    while(start<=end)
    {
        if(pow(start, 2) + pow(end, 2) == c)
            return true;
        else if(pow(start, 2) + pow(end, 2) < c)    // if sum is less than c check next number ie. start++ 
            start++;
        else                                        // if sum is greater than c check prev number ie. end++
            end--;
    }
    return false;
}

int main()
{
    cout << judgeSquareSum(0);

    return 0;
}