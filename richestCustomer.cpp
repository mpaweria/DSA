//  https://leetcode.com/problems/richest-customer-wealth/description/

#include<iostream>
#include<vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int max=0, sum=0;
    for(int i=0; i<accounts.size(); i++)
    {
        sum=0;
        for(int j=0; j<accounts[i].size(); j++)
        {
            sum+=accounts[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }       
    return max;
}
int main()
{
    vector<vector<int>> vec= {{2,8,7},{7,1,3},{1,9,5}};
    cout << maximumWealth(vec);
    
    return 0;
}