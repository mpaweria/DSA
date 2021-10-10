//  https://leetcode.com/problems/plus-one/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n=digits.size()-1;
    digits[n]++;
    for(int i=n; i>0; i--)    
    {
        if(digits[i]>9)
        {
            digits[i] %= 10;
            digits[i-1]++;
        }
    }
    if(digits[0]>9)
    {
        digits[0] %= 10;
        digits.insert(digits.begin(), 1);
    }
    return digits;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main() {
    vector<int> vec = {9,9,9};
    printArray(plusOne(vec));

    return 0;
}