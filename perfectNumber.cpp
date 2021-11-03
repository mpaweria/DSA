//  https://leetcode.com/problems/perfect-number/

#include<iostream>
using namespace std;

bool checkPerfectNumber(int num) {
    int sum=1;
    for(int i=2; i*i<=num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
            sum += (num/i);
        }
    }
    return (sum==num);
}
int main() {
    cout << checkPerfectNumber(28);

    return 0;
}
// bool checkPerfectNumber(int num) {
//     int sum=0;
//     for(int i=1; i<=num/2; i++)
//     {
//         if(num%i == 0)
//         {
//             sum += i;
//         }
//     }
//     if(sum == num)
//         return true;
//     else
//         return false;
// }