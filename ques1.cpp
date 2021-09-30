//  https://www.codechef.com/SPIN2021/problems/TLG

#include<iostream>
using namespace std;

int main()
{
    int rounds=0, p1=0, p2=0, s1=0, s2=0, lead=0, leader=0;
    cin >> rounds;
    for(int i=0; i<rounds; i++)
    {
        cin >> p1 >> p2;
        s1+=p1;
        s2+=p2;
        if(s1>s2)
        {
            if(lead<(s1-s2))
            {
                lead=s1-s2;
                leader=1;
            }
        }
        else
        {
            if(lead<(s2-s1))
            {
                lead=s2-s1;
                leader=2;
            }
        }
    }
    cout << leader << " " << lead;

    return 0;
}
