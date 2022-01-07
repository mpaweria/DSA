//  https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

#include<iostream>
#include<vector>
using namespace std;

vector<int> minOperations(string boxes) {
    int n = boxes.length();    
    vector<int> ans(n, 0);  
    int step = 0, ball = 0;

    for(int i=n-1; i>=0; i--)
    {
        ans[i] = step;
        if(boxes[i]=='1')
            ball++;
        step+=ball;
    }
    step = 0; ball = 0;

    for(int i=0; i<n; i++)
    {
        ans[i] += step;
        if(boxes[i]=='1')
            ball++;
        step+=ball;
    }
    return ans;
}
void print(vector<int> vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
int main()
{
    string s = "110";
    print(minOperations(s));

    return 0;
}