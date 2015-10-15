#include<iostream>
#include<vector>
#include<string.h>
typedef long long int ll;
using namespace std;
int main()
{
   // vector<int>v1;
    ll n,i,arr[10000],c,pos,d,res[100000],cu = 0,cycle = 0;
    cin>>n;
    ll arra[n+1];
    for(i = 1;i <= n;++i)
        arra[i] = 0;
    for(i = 1;i <= n;++i)
        cin>>arr[i];
    for(i = 1;i <= n;++i)
    {
        if(arra[i] == 1)
            continue;
        else
        {
            ++cycle;
            arra[i] = 1;
            d = i;
            c = 1000000;
            res[cu] = i;
            ++cu;
           // cout<<i<<" ";
            while(c != i)
            {
                c = d;
               // cout<<"hello"<<endl;
                pos = arr[i];
                arra[pos] = 1;
                res[cu] = pos;
                ++cu;
               // cout<<pos<<" ";
                i = pos;
            }
            res[cu] = 1000000;
            ++cu;
           // cout<<endl;
        }
    }
    cout<<cycle<<endl;
    for(i = 0;i < cu;++i)
    {
        if(res[i] == 1000000)
        {
            cout<<endl;
            continue;
        }
        else
        cout<<res[i]<<" ";
    }
}
