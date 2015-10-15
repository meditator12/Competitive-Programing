#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,te,n,i,s = 0,arr[100000],arra[100000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i = 0;i < n;++i)
            scanf("%lld",&arr[i]);
        for(i =0; i < n;++i)
            s = s + arr[i];
        te = (n-1);
        s = s/te;
        for(i = 0;i < n;++i)
        {
            printf("%lld ",s-arr[i]);
        }
        /*for(i = 0;i < n;++i)
        {
            cout<<arra[i]<<" ";
        }*/
        printf("\n");
        s = 0;
    }
    return 0;
}
