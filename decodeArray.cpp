//  https://leetcode.com/problems/decode-xored-array/

#include<iostream>
#include<vector>
using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
    vector<int> result(encoded.size()+1, first);
    for(int i=0; i<encoded.size(); ++i)
    {
        result[i+1] = result[i] ^ encoded[i];
    }
    return result;
}

void print(vector<int> vec)
{
    for(auto v: vec)
        cout << v << " ";
}
int main()
{
    vector<int> num = {6,2,7,3};
    print(decode(num, 4));

    return 0;
}

// vector<int> decode(vector<int>& encoded, int first) {
//     vector<int> ans;
//     ans.push_back(first);

//     for(int i=0; i<encoded.size(); i++)
//     {
//         int curr = first ^ encoded[i];
//         ans.push_back(curr);
//         first=curr;
//     }        
//     return ans;
// }