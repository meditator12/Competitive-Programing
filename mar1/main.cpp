#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    long long int t,i,n,m,k,l,p,c,flag = 0,add;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&n,&m,&k,&l);
        while(l--)
        {
            scanf("%lld%lld",&p,&c);
            add = m+p;
            if(add >= n && k >= c)
            {
                flag = 1;
            }
        }
        if(flag == 1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
        flag = 0;
    }
    return 0;
}
