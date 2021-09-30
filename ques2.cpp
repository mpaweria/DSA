// https://www.codechef.com/SPIN2021/problems/GCD2

#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    for(int i=a/2; i>=0; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
            break;
        }
    }
    return 1;
}

int main() {
	// your code goes here

    int num=0, i=0, a=0, b=0;
    cin >> num;
    int arr[num];
    while (i<num)
    {
        cin >> a >> b;
        arr[i] = (a>b) ? hcf(a, b) : hcf(b, a);
        i++;
    }
    
    for(auto a: arr)
        cout << a << endl;

	return 0;
}
