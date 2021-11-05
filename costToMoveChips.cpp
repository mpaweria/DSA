//  https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

#include<iostream>
#include<vector>
using namespace std;

int minCostToMoveChips(vector<int>& position) {
    int odd=0, even=0;
    for(int i=0; i<position.size(); i++)
    {
        if(position[i]%2==0)
            even++;
        else
            odd++;
    }
    return min(odd, even);
}
int main()
{
    vector<int> vec = {1,2,3};
    cout << minCostToMoveChips(vec);

    return 0;
}