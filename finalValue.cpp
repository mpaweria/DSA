//  https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

#include<iostream>
#include<vector>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int x=0;
    for(int i=0; i<operations.size(); i++)
    {
        if(operations[i]=="X++" || operations[i]=="++X")
            x++;
        else if(operations[i]=="X--" || operations[i]=="--X")
            x--;
    }        
    return x;
}
int main()
{
    vector<string> vec = {"++X","--X","X++"};

    cout << finalValueAfterOperations(vec);
}