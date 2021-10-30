//  https://leetcode.com/problems/jewels-and-stones/

#include<iostream>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    int count=0;
    for(int i=0; i<jewels.length(); i++)
    {
        for(int j=0; j<stones.length(); j++)
        {
            if(jewels[i] == stones[j])
                count++;
        }
    }
    return count;
}
int main()
{
    string jewels="z", stones="ZzZ";
    cout << numJewelsInStones(jewels, stones);

    return 0;
}