//  https://leetcode.com/problems/water-bottles/

#include<iostream>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int totalBottles = numBottles, empty = numBottles;
    while (empty >= numExchange)
    {
        totalBottles += empty/numExchange;
        empty = empty/numExchange + empty%numExchange;
    }
    return totalBottles;
}
int main() {
    cout << numWaterBottles(9, 3);
    
    return 0;
}