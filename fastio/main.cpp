#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,n,n1,c = 0;
    scanf("%lld",&t);
    scanf("%lld",&n);
    while(t--)
    {
        scanf("%lld",&n1);
        if(n1%n==0)
            ++c;
    }
    printf("%lld\n",c);
}
