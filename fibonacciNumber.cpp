//  https://leetcode.com/problems/fibonacci-number/

#include<iostream>
#include<vector>
using namespace std;

// Better approach in terms of space and time
int fib(int n) {
    vector<int> fibNum(n+1);

    if(n==0 || n==1)
        return n;
    fibNum[0]=0;
    fibNum[1]=1;

    for(int i=2; i<=n; i++)
    {
        fibNum[i] = fibNum[i-1] + fibNum[i-2];
    }
    return fibNum[n];
}

int main() {
    cout << fib(4);

    return 0;
}

// int fib(int n) {
//     if(n==0 || n==1)
//         return n;
    
//     return (fib(n-2) + fib(n-1));
// }