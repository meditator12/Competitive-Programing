#include<stack>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    int l,i,flag = 0;
    cin>>s;
    stack<char>st;
    l = s.length();
    if(l == 1)
        cout<<"unbalanced"<<endl;
    else
    {
    for(i = 0;i < l;++i)
    {
        if(s[i] == '('||s[i] == '{'||s[i] == '[')
            {
                st.push(s[i]);
                //cout<<st.top()<<endl;
            }
        else if(s[i] == ')')
        {
            if(st.top() == '(')
                st.pop();
            else
            {
                flag = 1;
                break;
            }
        }
        else if(s[i] == '}')
        {
            if(st.top() == '{')
            {
                //cout<<"fv";
                st.pop();
            }
            else
            {
                //cout<<"favf"<<endl;
                flag = 1;
                break;
            }
        }
        else if(s[i] == ']')
        {
            if(st.top() == '[')
                st.pop();
            else
            {
                flag = 1;
                break;
            }
        }
    }
    if(!st.empty())
        flag = 1;
    if(flag == 1)
        cout<<"Unbalanced"<<endl;
    else
        cout<<"balanced"<<endl;
    }
}
