#include<iostream>
using namespace std;
int main()
{
    int t,l,l2,i,j,count = 0;
    string s,m;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>m;
        l = s.length();
        l2 = m.length();
        for(i = 0;i < l2;++i)
        {
            for(j = 0;j < l;++j)
            {
                if(m[i] == s[j])
                {
                    ++count;

                   // s[i] = '';
                   // m[j] = '0';
                    break;
                }
            }
        }
        cout<<count<<endl;
        count = 0;
    }

    return 0;
}
