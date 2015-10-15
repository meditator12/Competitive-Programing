#include <bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
using namespace std;
int main()
{
    ll t,n,m,i,x,y,l,max;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>l;
        x = m + n;
        y = m +n + n;
        if(l == 1)
            cout<<y%mod<<endl;
        else{
       /* for(i = 0;i < l;++i)
        {
            x = m%mod + n%mod;
            y = m%mod + n%mod+ n%mod;
            m = y%mod;
            n = x%mod;

        }*/
        //cout<<m%mod<<endl;
        max = (((((l+1)%mod)*(x%mod))%mod) + (((l)%mod)*y%mod))%mod;
        cout<<max%mod<<endl;
        }
    }
    return 0;
}
