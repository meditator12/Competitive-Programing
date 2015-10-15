#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,n,re,ans,c = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n != 0)
        {
            re = floor(log2(n));
            ans = pow(2,re);
            if(re > 11)
            {
               n = n - 2048;
               ++c;
            }
            else
            {
                n = n - ans;
                ++c;
            }
        }
        cout<<c<<endl;
        c = 0;
    }
    return 0;
}
