#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int arr[100000],arra[100000],i,j,m,n,k,l,dif;
    cin>>n>>m>>k>>l;
    for(i = 0;i < n;++i)
        cin>>arr[i];
    for(i = 0;i < m;++i)
        cin>>arra[i];
    dif = m - l;
    if(dif >= 0)
    {
        if(arr[k-1] < arra[dif])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
