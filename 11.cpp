#include<iostream>
#include<vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1 && flowerbed[0]==0 && n==1)
            return true;

        for(int i=0; i<flowerbed.size(); i++)
        {
            if(flowerbed[i]==0)
            {
                if(i==0 && flowerbed[i+1]==0)
                {
                    flowerbed[i]=1;
                    n--;
                }
                else if(i==flowerbed.size()-1 && flowerbed[i-1]==0)
                {
                    flowerbed[i]=1;
                    n--;
                }
                else
                {
                    if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
                    {
                        flowerbed[i]=1;
                        n--;
                    }
                }
            }
        }
        if(n>0)
            return false;
        else
            return true;  
    }  
int main()
{
    vector<int> vec = {1,0,0,0,0,0,1};
    int n=2;
    cout << canPlaceFlowers(vec, n);

    return 0;
}

bool canPlaceFlowers(vector<int>& f, int n) {
        f.push_back(0);
        int i=0;
        while(i<f.size()-1)
        {
            if(i==0)
            {
                if(f[i]==0&&f[i+1]==0)
                {
                    f[i]=1;
                    n--;
                }
            }
            else
            {
                if(f[i]==0&&f[i-1]==0&&f[i+1]==0)
                {
                    f[i]=1;
                    n--;
                }
            }
            i++;
        }
        return n<=0;
    }

    bool canPlaceFlowers(vector<int>& f, int n) {
        
        int sz=f.size();
        //if we have to place zero flowers always return true
        if(n==0) return true;
        //if we wanna place one flower and f[0] is empty then return true
        if(sz==1 && f[0]==0 && n==1) return true;
        
        for(int i=0;i<sz;i++){
            
            if(f[i]==0){
                //if index is zero just check for next one location
                //if i+1 is not 1 then we can place flower there and reduce n
                if(i==0){
                    if(f[i+1]!=1) {f[i]=1;n--;}
                }
                //if index is last just check for prev one location
                //if i-1 is not 1 then we can place flower there and reduce n
                else if(i==sz-1){
                    if(f[i-1]!=1) {f[i]=1;n--;}
                }
                //if index is in middle just check for both prev and next   location
                //if both are not 1 then we can place flower there and reduce n
                else{
                    if(f[i+1]!=1 && f[i-1]!=1) {f[i]=1;n--;}
                }
            }
        }
        //if available places are greater or equal to n we return true
        return n<=0;
    }