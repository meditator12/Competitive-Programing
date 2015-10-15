#include<iostream>
#include<cstdio>

using namespace std;
int main()
{

    long long int t,i,n,s = 0,l;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        l = n/2;
        for(i = 1;i<=l;++i)
        {
            if(n%i == 0)
                s = s+i;
        }
        s = s+n;
        printf("%lld\n",s);
        s = 0;
    }
}
