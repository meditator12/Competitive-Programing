#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,tot = 0,arr[100000],i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i = 0;i < n;++i)
        {
            cin>>arr[i];
            tot = tot + arr[i];
        }
        if(tot <= m)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        tot = 0;
    }
    return 0;
}
