//  https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include<iostream>
#include<vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> greastestCandies;
    int max=0;
    for(int i=0; i<candies.size(); i++)
    {
        if(max<candies[i])
            max=candies[i];
    }     
    for(int i=0; i<candies.size(); i++)
    {
        if(candies[i]+extraCandies >= max)
            greastestCandies.push_back(true);
        else
            greastestCandies.push_back(false);
    }
    return greastestCandies;
}
int main()
{
    vector<int> arr = {4,2,1,1,2};
    vector<bool> ans = kidsWithCandies(arr, 1);

    for(auto v: ans)
    {
        cout << v << endl;
    }
    return 0;
}