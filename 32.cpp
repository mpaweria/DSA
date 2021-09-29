//  https://leetcode.com/problems/defanging-an-ip-address/

#include<iostream>
#include<string>
using namespace std;

string defangIPaddr(string address) {
    string add;
    for(int i=0; i<address.length(); i++)
    {
        if(address[i] == '.')
        {
            add += '[';
            add += '.';
            add += ']';
        }
        else
            add+=address[i];
    }        
    return add;
}
int main()
{
    cout << defangIPaddr("1.1.1.1");

    return 0;
}