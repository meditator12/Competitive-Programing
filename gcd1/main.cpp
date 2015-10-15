#include<iostream>
#include<algorithm>
int gcd(int a,int b)
{
    int c;
    while(a != 0)
    {
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}
using namespace std;
int main()
{
    int n,i,arr[1000],arra[1000],c,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        c = arr[0];
        for(i = 1;i < n;++i)
        {
            c = gcd(c,arr[i]);
        }
        for(i = 0;i < n;++i)
            arra[i] = arr[i] / c;
        for(i = 0;i < n;++i)
            cout<<arra[i]<<" ";
        cout<<endl;
    }
    return 0;
}
