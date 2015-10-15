#include<iostream>
typedef long long int ll;
ll gcd(ll,ll);
using namespace std;
int main()
{
    ll n,i,j,arr[100000],arra[100000],flag = 0;
    cin>>n;
    for(i = 1;i <= n;++i)
        cin>>arr[i];
    for(i = 1;i <= n;++i)
    {
        flag = 0;
        if(i == n)
            arra[i] = -1;
        else{
        for(j = i+1;j <= n;++j)
        {
            if(gcd(arr[i],arr[j]) != 0||gcd(arr[i],arr[j])!=1)
            {
                cout<<j<<"hjgf"<<endl;
                arra[i] = j;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            arra[i] = -1;

    }
}
for(i = 1;i <= n;++i)
        cout<<arra[i]<<" ";
    cout<<endl;
    flag = 0;
}
ll gcd(ll a,ll b)
{
    if(b == 0)
        return a;
    else if(a>=b)
        return gcd(b,(a-b));
    else
        return gcd(a,(b-a));
}
