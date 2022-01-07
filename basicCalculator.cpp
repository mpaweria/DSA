//  https://leetcode.com/problems/basic-calculator/

#include<iostream>
#include<stack>
using namespace std;

int calculate(string s) {
    stack<int> st;
    long long int res = 0, sign = +1;

    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        if(isdigit(ch))
        {
            long long int num = 0;
            while (i<s.length() && isdigit(s[i]))
            {
                num = num*10 + (s[i]-'0');
                i++;
            }
            res += num * sign;
            i--;
            sign = +1;
        }
        else if(ch == '(')
        {
            st.push(res);
            st.push(sign);
            res = 0;
            sign = +1;
        }
        else if(ch == ')')
        {
            
            res *= st.top();
            st.pop();
            res += st.top();
            st.pop();
        }
        else if(ch == '-')
            sign = -1;
    }
    return res;
}

int main()
{
    cout << calculate("2-1+3");

    return 0;
}

// int calculate(string s) {
//     stack <pair<int, int>> st;      
//     int ans = 0, sign = +1;
//     for(int i=0; i<s.length(); i++)
//     {
//         char ch = s[i];

//         if(isdigit(ch))
//         {
//             int num = 0;
//             while (i < s.length() && isdigit(s[i]))
//             {
//                 num = num*10 + s[i] - '0';
//                 i++;
//             }
//             i--;
//             ans += num*sign;
//             sign = +1;
//         }
//         else if(ch == '(')
//         {
//             st.push(make_pair(ans, sign)); 
//             ans= 0;
//             sign = +1;
//         }
//         else if(ch == ')')
//         {
//             ans = st.top().first + (st.top().second * ans);
//             st.pop();
//         }
//         else if(ch == '-')
//             sign = -1 * sign;
//     }  
//     return ans;
// }