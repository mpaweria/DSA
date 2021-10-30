//  https://leetcode.com/problems/defanging-an-ip-address/

#include<iostream>
using namespace std;

string defangIPaddr(string address) {
    string add;
    for(int i=0; i<address.length(); i++)
    {
        if(address[i] == '.')
        {
            add.push_back('[');
            add.push_back('.');
            add.push_back(']');
        }
        else
            add.push_back(address[i]);
    }
    return add;
}
int main()
{
    cout << defangIPaddr("1.1.1.1");

    return 0;
}