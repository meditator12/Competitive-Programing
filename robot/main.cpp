#include<iostream>
#include<string.h>
using namespace std;
int palindrome(int l)
{
    int m;
    m  =l/2;
    if(m == 1)
        return 1;
    else
    {
        return 1 + palindrome(m/2);
    }
}
int main()
{
    int t,i,l,flag = 0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.length();
        for(i = 0;i < l/2;++i)
        {
            if(s[i] == s[(l-1)-i])
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<l+(palindrome(l))<<endl;
        }
        else
            cout<<l<<endl;
        flag = 0;
    }
    return 0;
}
