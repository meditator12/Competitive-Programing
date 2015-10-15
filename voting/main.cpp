#include<iostream>
using namespace std;
int main()
{
    long long int n,i,s = 1,arr[100000],arra[100000],x,l,m,y,ans;
    cin>>n;
    for(i = 1;i <= n;++i)
    {
        cin>>arr[i];
        s = s*arr[i];
        arra[i] = s;
    }
    cin>>x;
    for(i = 1;i <= x;++i)
    {
        cin>>l>>m>>y;
        if(l == 1)
        {
            ans = arra[m];
            ans = ans%y;
            cout<<ans<<endl;
        }
        else
        {
            if(arra[l-1] != 0)
            {ans = arra[m]/arra[l-1];
            ans = ans % y;
            cout<<ans<<endl;}
            else
            {
                ans = arra[m];
            ans = ans%y;
            cout<<ans<<endl;
            }
        }
    }
    return 0;
}
