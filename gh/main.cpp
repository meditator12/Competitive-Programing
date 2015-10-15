#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,pos,val,diff,result,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pos = floor(log2(n));
        val = pow(2,pos);
        diff = n - val;
        result = 1 + (diff) * 2;
        cout<<result<<endl;
    }
    return 0;
}
