#include<iostream>
using namespace std;
int main()
{
    long long int t,i,l1,flag = 0;
    string s,l;
    cin>>t;
    while(t--)
    {
        cin>>s>>l;
        l1 = s.length();
        for(i = 0;i < l1;++i)
        {
            if(s[i] == l[i])
                continue;
            else if((s[i] == '?' && l[i] != '?')||(s[i] != '?' && l[i] == '?')||(s[i] == '?' && l[i] == '?'))
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        flag = 0;
    }
}
