#include<iostream>
#include<math.h>
typedef long long int ll;
ll gcd(ll,ll);
ll lcm(ll,ll);
ll factors(ll);
ll prime_divisors(ll);
ll fast_exp(ll,ll);
ll fibonnaci_Dp(ll);
ll fibonnaci_Matrixexponen(ll);
ll nCr(ll,ll);
ll nPr(ll,ll);
void multiply(ll F[2][2], ll M[2][2]);
void power(ll F[2][2], ll n);
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        //cout<<fast_exp(n,m)<<endl;
        //cout<<fibonnaci_Dp(8);
        //cout<<fibonnaci_Matrixexponen(7);
       cout<<gcd(n,m)<<endl;
     //   cout<<lcm(n,m)<<endl;
     //  prime_divisors(n);
       cout<<endl;
      // prime_divisors(m);
    //    factors(n);

    }
    return 0;
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
ll lcm(ll a,ll b)
{
    return ((a*b)/gcd(a,b));
}
ll prime_divisors(ll a)
{
        ll i;
        for(i = 2;i <= sqrt(a);++i)
        {
            while(a%i == 0)
            {
                cout<<i<<" ";
                a=a/i;
            }
        }
        if(a > 2)
            cout<<a<<endl;
}
ll factors(ll a)
{
    ll i;
    for(i = 1;i <= a;++i)
        if(a % i == 0)
            cout<<i<<" ";
    cout<<endl;
}
ll fast_exp(ll base, ll exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            long long int base1 = pow(fast_exp(base, exp/2),2);
            if(base1 >= 1000000007)
            return base1%1000000007;
            else
            return base1;
        }
        else
        {
            long long int ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            if(ans >= 1000000007)
            return ans%1000000007;
            else
            return ans;
        }
    }
}
ll fibonnaci_Dp(ll n)
{
    ll fibon[100000];
    fibon[0] = 0;
    fibon[1] = 1;
    for(ll i = 2;i <= n;++i)
        fibon[i] = fibon[i-1] + fibon[i-2];
    return fibon[n];
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
ll nCr(ll n,ll r)
   {
       ll j,ans=1;

       if (r>n/2)
       r=n-r;

       for (j=0;j<r;j++)
       {ans*=(n-j) ;
       ans/=j+1;
       }
       return ans;
   }
ll nPr(ll g,ll h)
{
   ll num;
   ll t,i,n,k;
       num=1;
       for(i=g;i>(g-h);i--)
       num=(num*i)%1000000007;
   return num;
}
