//  https://leetcode.com/problems/kth-distinct-string-in-an-array/

#include<iostream>
#include<vector> 
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    bool flag = false;

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                flag = true;
                continue;
            }
        }
        if(!flag)
            k--;

        flag = false;

        if(k==0) 
            return arr[i];
    }        
    return "";
}
int main()
{
    vector<string> vec = {"d","b","c","b","c","a"};
    cout << kthDistinct(vec, 2);

    return 0;
}