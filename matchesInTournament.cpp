//  https://leetcode.com/problems/count-of-matches-in-tournament/

#include<iostream>
using namespace std;

int numberOfMatches(int n) {
    int ans=0;
    while(n!=1)
    {
        ans = ans+n/2;
        if(n%2!=0)
            n = (n/2)+1;
        else
            n = n/2;
    }
    return ans;
}
int main() {
    cout << numberOfMatches(7);

    return 0;
}