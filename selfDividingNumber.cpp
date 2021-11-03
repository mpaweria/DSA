//  https://leetcode.com/problems/self-dividing-numbers/

#include<iostream>
#include<vector>
using namespace std;

bool isDivisible(int num) {
    int temp = num;
    bool flag = true;
        while(num>0)
        {
            if(num%10 == 0)
                return false;
            int rem = num%10;
            if(temp%rem != 0)
                flag = false;

            num/=10;
        }
    return flag;
}
vector<int> selfDividingNumbers(int left, int right) {
    vector<int> vec;
    for(int i=left; i<= right; i++)
    {
        if(isDivisible(i))
            vec.push_back(i);
    }      
    return vec;
}
void printArray(vector<int> vec)
{
    for(auto i: vec)
        cout << i << " ";
}
int main()
{
    int left = 47, right = 85;
    printArray(selfDividingNumbers(left, right));

    return 0;
}