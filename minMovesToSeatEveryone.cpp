//  https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    int moves=0;
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    for(int i=0; i<seats.size(); i++)
    {
        moves += abs(seats[i]-students[i]);
    }        
    return moves;
}
int main() {
    vector<int> seats = {2,2,6,6}, students = {1,3,2,6};
    cout << minMovesToSeat(seats, students);

    return 0;
}