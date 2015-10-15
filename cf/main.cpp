#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    long long int i,j,l,m,cou = 0,co = 0;
    cin>>s>>t;
    l = s.length();
    m = t.length();
    for(i = 0;i < l;++i)
    {
        for(j = 0;j < m;++j)
        {
            if(s[i] == t[j])
            {
                t[j] = '0';
                ++cou;
                s[i] = '0';
                break;
            }
        }
    }
    for(i = 0;i < l;++i)
    {
        if(s[i] == '0')
            continue;
        else
        {
            for(j = 0;j < m;++j)
            {
                if(s[i] - t[j] == 32 || t[j] - s[i] == 32)
                {
                    t[j] = '0';
                    ++co;
                    s[i] = '0';
                    break;
                }
            }
        }
    }
    cout<<cou<<" "<<co;
    return 0;
}
