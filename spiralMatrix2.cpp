//  https://leetcode.com/problems/spiral-matrix-ii/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> spiralMatrix(n, vector<int>(n,0));
    int direction = 0, count = 1, top = 0, left = 0, right = n-1, bottom = n-1;

    while(top <= bottom && left <= right)
    {
        switch(direction)
        {
            case 0: for(int i=left; i<=right; i++)
                    {
                        spiralMatrix[top][i] = count;
                        count++;
                    }
                    direction++;
                    top++;
                    break;

            case 1: for(int i=top; i<=bottom; i++)
                    {
                        spiralMatrix[i][right] = count;
                        count++;
                    }
                    direction++;
                    right--;
                    break;

            case 2: for(int i=right; i>=left; i--)
                    {
                        spiralMatrix[bottom][i] = count;
                        count++;
                    }
                    direction++;
                    bottom--;
                    break;

            case 3: for(int i=bottom; i>=top; i--)
                    {
                        spiralMatrix[i][left] = count;
                        count++;
                    }
                    direction=0;
                    left++;
                    break;
        }
    }
    return spiralMatrix;        
}
void print(vector<vector<int>> vec)
{
    for(auto i: vec)
    {
        for(auto j: i)
            cout << j << " ";
        cout << endl;
    }
}
int main()
{
    print(generateMatrix(3));

    return 0;
}