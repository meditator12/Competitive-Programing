#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int ans=0,i,n,m,l,c = 0,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i] == 'T')
            c = c+2;
            else
            c = c+1;
        }
        cin>>n;
        m=n*12-1;
        for(i=0;i<m;i++)
        {
            ans = ans + (m-i)/c;
        }
        cout<<ans<<endl;
        ans = 0;
        c = 0;
    }
return 0;
}
