#include<iostream>
#include<cmath>
typedef long long int ll;
ll cal(ll,ll);
using namespace std;
int main()
{
    ll t,n,arr[100000],i,sum = 0,flag = 0,h,o,u,y,r,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 1;i <= n;++i)
            cin>>arr[i];
        k = n/2;
        for(i = 2;i < n;++i)
        {

                h = abs(arr[i] - arr[n-i+1]);
                if(arr[i-1] %2 == 0 && arr[i+1]%2==0)
                {
                    o = cal(arr[i-1],arr[i+1]);
                    u = abs(o-arr[n-i+1]);
                    y = cal(arr[n-i],arr[n-i+2]);
                    r = abs(arr[i] - y);
                    //cout<<u<<" "<<h<<" "<<r<<endl;
                    if(u > r)
                    {
                        if(u > h)
                        {
                        flag = 1;
                        arr[i] = u;}
                    }
                    else
                    {
                        if(r > h){
                                flag = 1;
                        sum += r;
                        arr[n-i+1] = r;
                    }}
                }
                flag = 0;
            }
        for(i = 1;i <= k;++i)
            sum+=abs(arr[i]-arr[n-i+1]);
        cout<<sum<<endl;
        sum = 0;
        flag = 0;
    }
}
ll cal(ll a,ll b)
{
    return ((a+b)/2);
}
