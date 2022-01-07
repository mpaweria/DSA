//  https://leetcode.com/problems/pascals-triangle/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    int n =  numRows;
    vector<vector<int>> vec = {{1}};
    if(n==1)
        return vec;
    
    vec = {{1},{1,1}};
    if(n==2)
        return vec;
    
    int k=n-2;
    while (k--)
    {
    vector<int> v = {1};
        for(int i=0; i<vec.size()-1; i++)
        {
            v.push_back(vec[vec.size()-1][i]+vec[vec.size()-1][i+1]);
        }
        v.push_back(1);
        vec.push_back(v);
        v.clear();
    }
    return vec;
}
void printArray(vector<vector<int>> vec)
{
    for(auto i: vec)
    {
        for(auto j: i)
            cout << j << " ";
        cout << endl;
    }
}
int main() 
{
    printArray(generate(5));

    return 0;
}