#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
int main()
{
    ll i,t,n,arr[100000],arra[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        for(i = 1;i < n;++i)
        {
            arra[i-1] = arr[0] - arr[i];
        }
        for(i = 0;i < (n-1);++i)
        {
            cout<<arra[i]<<endl;
        }
    }
}
