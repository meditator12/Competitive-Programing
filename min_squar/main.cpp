#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,i,k,o,p,n,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        i = floor(sqrt(n));
        k = ceil(sqrt(n));
        if(i == k)
        {
            cout<<i+(i-1)<<endl;
        }
        else
        {
            o = k*k;
            p = i*i;
            mid = (o+p-1)/2;
            if(n <= mid)
                cout<<k+(k-2)<<endl;
            else
                cout<<k+(k-1)<<endl;
        }
    }
    return 0;
}
