#include<iostream>
#include<cmath>
#include<ctype.h>
#include<stdlib.h>
typedef long long int ll;
ll dist(ll,ll,ll,ll);
using namespace std;
int main()
{
    ll t,n,arr[10000][10000],x,y,z,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i][0]>>arr[i][1];
        x = dist(arr[0][0],arr[1][0],arr[0][1],arr[1][1]);
        y = dist(arr[1][0],arr[2][0],arr[1][1],arr[2][1]);
        z = dist(arr[2][0],arr[0][0],arr[2][1],arr[0][1]);
        if(x+y <= 2*n || x+z <= 2*n || z+y <= 2*n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
ll dist(ll a,ll b,ll c,ll d)
{
    ll g = (a-b)(a-b);
    ll p = (c-d)(c-d);
    ll u = abs(g-p);
    ll o = sqrt(u);
    return o;
}
