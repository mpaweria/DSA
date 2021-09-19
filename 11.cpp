#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if(n==0)
        return true;
    if(flowerbed.size()==1 && flowerbed[0]==0)
        return true;

    for(int i=0; i<flowerbed.size(); i++)
    {
        if(flowerbed[i]==0)
        {
            if(i==0 && flowerbed[i+1]!=1){
                flowerbed[i]=1;
                n--;
            }
            else if(i==flowerbed.size()-1 && flowerbed[i-1]!=1){
                flowerbed[i]=1;
                n--;
            }
            else if(flowerbed[i+1]!=1 && flowerbed[i-1]!=1){
                flowerbed[i]=1;
                n--;
            }
        }
    }
    return n<=0;
}  
int main()
{
    vector<int> vec = {1,0,0,0,0,0,1};
    int n=2;
    cout << canPlaceFlowers(vec, n);

    return 0;
}