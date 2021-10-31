#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int m = flowerbed.size();

    for(int i=0; i<m; i++)
    {
        if(flowerbed[i] == 0)
        {
            if(m==1)
                return (flowerbed[0] == 0 && n <=1) ? true : false;
            else if(i == 0 && flowerbed[1] == 0 )
            {
                n--;
                flowerbed[i] = 1;
            }
            else if(i>0 && i+1<m && flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                n--;
                flowerbed[i] = 1;
            }
            else if(i==m-1 && flowerbed[i-1]==0)
            {
                n--;
                flowerbed[i] = 1;
            }
        }
    }
    return (n<1) ? true : false;
}
int main()
{
    vector<int> vec = {1,0,0,0,1};
    int n=2;
    cout << canPlaceFlowers(vec, n);

    return 0;
}