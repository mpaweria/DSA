//  https://leetcode.com/problems/add-digits/

#include<iostream>
using namespace std;

int addDigits(int num) {
    int rem;
    while (num/10!=0)
    {
        rem=0;
        while(num>0)
        {
            rem += (num%10);
            num/=10;
        }
        num=rem;
    }
    return num;
}

int main() {
    cout << addDigits(68);

    return 0;
}

// int addDigits(int num) {
//     int sum=0;
//     while(num>=0)
//     {
//         sum = sum + (num % 10);
//         num/=10;

//        if(num==0)
//        {
//             if(sum/10==0)
//                 return sum;
//             else {
//                 num=sum;
//                 sum=0;
//             }
//        }
//     }        
//     return 0;
// }