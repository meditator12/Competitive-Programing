#include<iostream>
#include<math.h>
typedef long long int ll;
ll fibonnaci_Matrixexponen(ll);
void multiply(ll F[2][2], ll M[2][2]);
void power(ll F[2][2], ll n);
using namespace std;
int main()
{
    int t;
    //cin>>t;
    //while(t--){
    //    ll n,m;
    //    cin>>n>>m;
        cout<<fibonnaci_Matrixexponen(5);
    //}
    return 0;
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
