//  https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

#include<iostream>
using namespace std;

int numberOfSteps(int num) {
    int count=0;
    while(num>0)
    {
        if(num%2==0)
            num/=2;
        else
            num-=1;
        count++;
    }        
    return count;
}
int main() {
    cout << numberOfSteps(123);

    return 0;
}