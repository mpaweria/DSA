#include<iostream>
#include<vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> greatestCandies;
    int max=0;
    for(auto v: candies)       
    {
        if(v>max)
            max=v;
    }
    for(auto v: candies)
    {
        if(v+extraCandies >= max)
            greatestCandies.push_back(true);
        else
            greatestCandies.push_back(false);
    }
    return greatestCandies;
}
int main()
{
    vector<int> vec= {12,1,12};
    int num = 10;

    vector<bool> set = kidsWithCandies(vec, num);
    for(auto a: set)
    {
        cout << a << endl;
    }
    return 0;
}