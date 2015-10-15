#include<iostream>
using namespace std;
int main()
{
    long long int i,t,n,s,arr[100000],ans = 0,tot = 0,mod,add,rem,extra = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 1;i <= 26;++i)
        {
            cin>>arr[i];
            tot += arr[i];
        }
        s = 6*(n+1);
        if(s < 26)
        {
            for(i = 1;i <= s;++i)
            {
                ans = ans + arr[i];
            }
            cout<<ans<<endl;
            ans = 0;
            tot = 0;
        }
        else
        {
            mod = s/26;
         //   cout<<"hell"<<mod<<endl;
            add = mod * 26;
         //   cout<<"oo"<<add<<endl;
            rem = s - add;
          //  cout<<rem<<endl;
            for(i = 1;i <= rem;++i)
                extra += arr[i];
           // cout<<extra<<endl;
            ans = (mod * tot) + extra + (s - 26);
            cout<<ans<<endl;
            ans = 0;
            extra = 0;
            tot = 0;
        }
    }
}
