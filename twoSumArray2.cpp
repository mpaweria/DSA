//  https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> vec;
    int i=0, j=numbers.size()-1;
    while (i<j)
    {
        if(numbers[i]+numbers[j]<target)
            i++;
        else if(numbers[i]+numbers[j]>target)
            j--;
        else
        {
            vec.push_back(i+1);
            vec.push_back(j+1);
            return vec;
        }
    }       
    return vec;
}
void printArray(vector<int> vec) {
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    vector<int> vec = {2,3,4};
    printArray(twoSum(vec, 6));

    return 0;
}