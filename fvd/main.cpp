#include<iostream>
#include<math.h>
#include<cctype>
#include<cstdlib>
using namespace std;
int main()
{
    long long int n,k,t,i,arr[100000],l,m,ans=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        if(n == 1)
        {
            cout<<abs(arr[0] - k)<<endl;
        }
        else{
        for(i = 0;i < n;++i)
        {
            l = arr[i]/k;
            if(l == 0)
                l = 1;
            m = k*l;
            cout<<abs(arr[i]-m)<<"df"<<endl;
            ans += min(abs(arr[i]-m),abs((k*(l+1))-arr[i]));
        }
        cout<<ans<<endl;
        ans = 0;
        }
    }
}
