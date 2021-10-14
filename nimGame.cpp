//  https://leetcode.com/problems/nim-game/

#include<iostream>
using namespace std;

bool canWinNim(int n) {
    if(n%4==0)
        return false;
    else
        return true;
}
int main() {
    cout << canWinNim(5);

    return 0;
}