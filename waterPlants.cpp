//  https://leetcode.com/problems/watering-plants/

#include<iostream>
#include<vector>
using namespace std;

int wateringPlants(vector<int>& plants, int capacity) {
    int water = capacity, steps = 0;
    for(int i=0; i<plants.size(); i++)
    {
        if(water >= plants[i])
        {
            steps++;
            water -= plants[i];
        }
        else
        {
            steps += 2*i+1;
            water = capacity-plants[i];
        }
    }
    return steps;
}
int main()
{
    vector<int> vec = {1,1,1,4,2,3};
    cout << wateringPlants(vec, 4);

    return 0;
}