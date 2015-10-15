#include<iostream>
#define mod 1299709
typedef long long int ll;
ll sum(ll);
ll fibonnaci_Matrixexponen(ll n);
void power(ll F[2][2], ll n);
void multiply(ll F[2][2],ll M[2][2]);
using namespace std;
int main()
{
    ll q,l,m,w = 0,i,j;
    cin>>q;
    for(i = 1;i <= q;++i)
    {
        w = 0;
        cin>>l>>m;
        for(j = l;j <= m;++j)
            w = (w + (sum(j) % mod))%mod;
        cout<<w<<endl;
    }
}
ll sum(ll n)
{
    ll result = 0;
    for(ll i = 1;i <= n;++i)
    {
        ll sum = 0;
        for(ll j = i+1;j <= n;++j)
            sum = ((sum % mod) + (fibonnaci_Matrixexponen(j) % mod))%mod;
        result = ((result%mod) + (sum * (fibonnaci_Matrixexponen(i)%mod)))%mod;
    }
    return result;
}
ll fibonnaci_Matrixexponen(ll n)
{

  ll F[2][2] = {{1,1},{1,0}};
  if (n == 0)
      return 0;
  power(F, n-1);

  return F[0][0];

}
void power(ll F[2][2], ll n)
{
  if( n == 0 || n == 1)
      return;
  ll M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}
void multiply(ll F[2][2],ll M[2][2])
{
    ll x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
    ll y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
    ll z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
    ll w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
