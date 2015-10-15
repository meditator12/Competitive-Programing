#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,arr[10000],n,c=1;
    cin>>n;
    for(i= 0;i < n;++i)
        cin>>arr[i];
    sort(arr+1,arr+n);
    reverse(arr+1,arr+n);
    for(i = 1;i < n;++i)
    {
        if(arr[i] == arr[i+1])
            ++c;
    }
    if(c == n-1)
    {
        cout<<"f";
        cout<<c;
    }
}
