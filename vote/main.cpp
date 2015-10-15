#include<iostream>
using namespace std;
int main()
{
    long long int dp[50001],arr[100],arra[100],ar[100],i,count = 0,n,m,l;
    cin>>n>>m;
    cin>>l;
    for(i = 0;i < n;++i)
        cin>>arr[i];
    for(i = 0;i < m;++i)
        cin>>arra[i];
    for(i = 0;i < l;++i)
        cin>>ar[i];
    for(i = 0;i <= 50001;++i)
        dp[i] = 0;
    for(i = 0;i < n;++i)
        dp[arr[i]] += 1;
    for(i = 0;i < m;++i)
        dp[arra[i]] += 1;
    for(i = 0;i < 9;++i)
        cout<<i<<endl;
    for(i = 0;i < 50001;++i)
    {
        if(dp[i]>1)
            ++count;
    }
    cout<<count<<endl;
    for(i = 0;i < 50001;++i)
    {
        if(dp[i]>1)
            cout<<i<<endl;
    }
    count = 0;
    return 0;
}
