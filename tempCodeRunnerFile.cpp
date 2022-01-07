int calculate(string s) {
    stack<int> st;
    long long int res = 0, sign = +1;

    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        if(isdigit(ch))
        {
            long long int num = 0;
            while (i<s.length() && isdigit(ch))
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
            st.push(sign);
            st.push(res);
            res = 0;
            sign = +1;
        }
        else if(ch == ')')
        {
            res += st.top();
            st.pop();
            res = res * st.top();
            st.pop();
        }
        else if(ch == '-')
            sign *= -1;
    }
    return res;
}