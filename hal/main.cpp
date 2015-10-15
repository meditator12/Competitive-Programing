#include<iostream>
#include<math.h>
using namespace std;
long long int power(long long int x, long long int y)
{
long long int temp;
if( y == 0)
return 1;
temp = power(x, y/2);
if (y%2 == 0)
return (temp*temp)%1000000007;
else
return (x*temp*temp)%1000000007;
}
int main()
{
    long long int t,n,ans = 1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans = power(7,n);
        cout<<ans<<endl;
        ans = 1;
    }
    return 0;
}
