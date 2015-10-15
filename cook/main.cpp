#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,i,n,arr[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i = 0;i < n;++i)
        {
            if(arr[i] == arr[i+1])
            {
                i = i+1;
            }
            else
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}
