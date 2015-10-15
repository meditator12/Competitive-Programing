#include<iostream>
typedef long long int ll;
ll gcd(ll,ll);
using namespace std;
int main()
{
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<gcd(n,m)<<endl;
    }
}
    ll gcd(ll a, ll b)
{
	if (b==0)
		return a;
	else if(a >= b)
		return gcd(b,a%b);
    else
        return gcd(a,b%a);
}

