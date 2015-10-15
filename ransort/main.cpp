#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,arr[100000],arra[100000],i,n,c = 0,d = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
        {
            cin>>arr[i];
            arra[i] = arr[i];
        }
        sort(arr,arr+n);
        sort(arra,arra+n);
        reverse(arra,arra+n);
        for(i = 0;i < n;++i)
        {
            if(i%2==0)
            {
                cout<<arr[c]<<" ";
                ++c;
            }
            else
            {
                cout<<arra[d]<<" ";
                ++d;
            }
        }
        cout<<endl;
        c = 0;
        d = 0;
    }
    return 0;
}
