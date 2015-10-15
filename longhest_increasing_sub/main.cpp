#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int arr[100000],arra[100000],i,j,n;
    cin>>n;
    for(i = 0;i < n;++i)
        cin>>arr[i];
    for(i = 0;i < n;++i)
        arra[i] = 1;
    for(i = 1;i < n;++i)
    {
        for(j = 0;j < i;++j)
        {
             if (arr[i] > arr[j] && arra[i] < arra[j] + 1)
                arra[i] = arra[j] + 1;
        }
    }
    sort(arra,arra+n);
    cout<<arra[n-1]<<endl;
}
