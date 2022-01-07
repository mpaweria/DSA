//  https://leetcode.com/problems/minimum-absolute-difference/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    sort(arr.begin(), arr.end());  
    vector<vector<int>> ans;
    int mindiff = arr[arr.size()-1];

    for(int i=1; i<arr.size(); i++)
    {
        int diff = arr[i] - arr[i-1];

        if(diff < mindiff)
        {
            ans.clear();
            mindiff = diff;
        }
        if(diff == mindiff)
            ans.push_back(vector<int>{arr[i-1], arr[i]});
    }
    return ans;
}
void print(vector<vector<int>> vec)
{
    for(auto i: vec)
    {
        for(auto j: i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<int> vec = {3,8,-10,23,19,-4,-14,27};
    print(minimumAbsDifference(vec));

    return 0;
}