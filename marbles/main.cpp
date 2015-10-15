#include<iostream>
typedef long long int ll;
ll nCr(ll,ll);
using namespace std;
int main()
{
    ll t,n,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        cout<<nCr(n-1,r-1)<<endl;
    }

}
ll nCr(ll n,ll r)
   {
       ll j,ans=1;

       if (r>n/2)
       r=n-r;

       for (j=0;j<r;j++)
       {ans*=(n-j) ;
       ans/=j+1;
       }
       return ans;
   }
