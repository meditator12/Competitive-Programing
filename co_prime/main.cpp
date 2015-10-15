#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long long int t,n,m,ans = 0,g,k,rem,io;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n == 1&&m == 1)
            cout<<"0"<<endl;
        else if(n == 1)
            cout<<m-n<<endl;
        else if(m == 1)
            cout<<n-m<<endl;
        else if((max(n,m)-min(n,m)) == 1)
            cout<<max(n,m)<<endl;
        else
        {
            while(n>1 && m>1)
            {
                if(n>m)
                {
                    ans += n/m;
                    n = n%m;
                }
                else
                {
                    ans += m/n;
                    m = m%n;
                }
            }
            cout<<ans<<endl;
            ans = 0;
        }
    }
}
