//  https://leetcode.com/problems/robot-return-to-origin/

#include<iostream>
#include<vector>
using namespace std;

bool judgeCircle(string moves) {
    int xAxis = 0, yAxis = 0;

    for(int i=0; i<moves.length(); i++)
    {
        switch (moves[i])
        {
        case 'U':
            xAxis += 1;
            break;
        case 'D':
            xAxis -= 1;
            break;
        case 'R':
            yAxis += 1;
            break;
        default:
            yAxis -= 1;
            break;
        }
    }
    if(xAxis==0 && yAxis==0)
        return true;
    else
        return false;
}
int main()
{
    string s = "LL";
    cout << judgeCircle(s);

    return 0;
}