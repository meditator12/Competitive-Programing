#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int count = 0,i,j,k = 0,n,x,arr[100000],arra[100000];
    cin>>n>>x;
    for(i = 0;i < n;++i)
        cin>>arr[i];
    for(i =0 ;i < n;++i)
        cin>>arra[i];
    sort(arr,arr+n);
    sort(arra,arra+n);
    for(i = 0;i < n;++i)
    {
        for(j = k;j < n;++j)
        {
            //cout<<j<<endl;
            //cout<<abs(arr[i]-arra[j])<<endl;
            if(abs(arr[i]-arra[j]) <= x)
            {
                ++count;
                k = j+1;
                //cout<<k<<endl;
                break;
            }
        }
    }
    cout<<count<<endl;
}
