#include<iostream>
#include<cmath>
typedef long long int ll;
using namespace std;
int main()
{
    ll t,n,m;
    long double min,max;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        min = sqrt((m*m)-(n*n));
        max = sqrt((m*m) + (n*n));
        cout<<min<<" "<<max<<endl;
    }
}
