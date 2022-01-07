//  https://leetcode.com/problems/integer-to-roman/

#include<iostream>
using namespace std;

string intToRoman(int num) {
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans;

    for(int i=0; i<13; i++)
    {
        while(num - val[i] >=0)
        {
            ans += roman[i];
            num -= val[i];
        }
    }
    return ans;
}

int main()
{
    cout << intToRoman(1994);

    return 0;
}

// Another Way

// string intToRoman(int num) {
//     string roman;

//     while (num != 0)
//     {
//         if(num >= 1000)
//         {
//             num -= 1000;
//             roman += "M";
//         }
//         else if(num >= 900)
//         {
//             num -= 900;
//             roman += "CM";
//         }
//         else if(num >= 500)
//         {
//             num -= 500;
//             roman += "D";
//         }
//         else if(num >= 400)
//         {
//             num -= 400;
//             roman += "CD";
//         }
//         else if(num >= 100)
//         {
//             num -= 100;
//             roman += "C";
//         }
//         else if(num >= 90)
//         {
//             num -= 90;
//             roman += "XC";
//         }
//         else if(num >= 50)
//         {
//             num -= 50;
//             roman += "L";
//         }
//         else if(num >= 40)
//         {
//             num -= 40;
//             roman += "XL";
//         }
//         else if(num >= 10)
//         {
//             num -= 10;
//             roman += "X";
//         }
//         else if(num >= 9)
//         {
//             num -= 9;
//             roman += "IX";
//         }
//         else if(num >= 5)
//         {
//             num -= 5;
//             roman += "V";
//         }
//         else if(num >= 4)
//         {
//             num -= 4;
//             roman += "IV";
//         }
//         else if(num >= 1)
//         {
//             num -= 1;
//             roman += "I";
//         }
//     }
//     return roman;
// }