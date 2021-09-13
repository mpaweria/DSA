#include<iostream>
#include<vector>
using namespace std;


// int findGCD(vector<int>& nums) {
//         int smallest=nums[0], largest=nums[0], gcd=0;
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(smallest > nums.at(i))
//                 smallest = nums.at(i);
//             if(largest < nums.at(i))
//                 largest = nums.at(i);
//         }
//         cout << largest << " " << smallest << endl;
//         for(int i=largest; i>=1; i--)
//         {
//             if(smallest%i==0 && largest%i==0)
//             {
//                 gcd = i;
//                 break;
//             }
//         }
//         return gcd;
//     }

//  My Version

// double average(vector<int>& salary) {
//         int min=salary[0], max=salary[0];
//         double avg, sum=0;
//         for(int i=0; i<salary.size(); i++)
//         {
//             if(salary[i]<min)
//                 min=salary[i];
//             if(salary[i]>max)
//                 max=salary[i];
//         }
//         cout << max << " " << min << endl;
//         for(int i=0; i<salary.size(); i++)
//         {
//             if(salary[i]!=min && salary[i]!=max)
//             {
//                 sum+=salary[i];
//             }
//         }
//         cout << sum << endl;
//         avg = sum/(salary.size()-2);
        
//         return avg;
//     }

//  Better Version 

    double average(vector<int>& salary) {
        int min=salary[0], max=salary[0];
        double avg, sum=0;
        for(int i=0; i<salary.size(); i++)
        {
            sum+=salary[i];
            if(salary[i]<min)
                min=salary[i];
            if(salary[i]>max)
                max=salary[i];
        }
        avg = (sum-(min+max))/(salary.size()-2);
        
        return avg;
    }

int main()
{
    vector<int> vec = {48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000};
    cout << average(vec);
}