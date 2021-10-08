//  https://leetcode.com/problems/reverse-string/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<char> reverseString(vector<char>& s) {
    int start=0, end=s.size()-1;
    while(start<end)
    {
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    return s;    
}
void printArray(vector<char> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<char> vec= {'h', 'e', 'l', 'l', 'o'};
    printArray(reverseString(vec));

    return 0;
}

//  using reverse function
// vector<char> reverseString(vector<char>& s) {
//     reverse(s.begin(), s.end());   
// }