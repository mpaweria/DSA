//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int profit=0, maximum=0, buy=prices[0];
    for(int i=1; i<prices.size(); i++)
    {
        if(prices[i] > buy)
        {
            profit = prices[i]-buy;
            maximum = (maximum < profit) ? profit : maximum;
        }
        else
            buy = prices[i];
    }
    return maximum;    
}
int main() {
    vector<int> vec = {7,1,5,3,6,4};
    cout << maxProfit(vec);

    return 0;
}