#include<iostream>
#include<algorithm>
#include<cstdio>
#include<math.h>
using namespace std;
inline int scan_d()    {register int ip=getchar_unlocked(),ret=0,flag=1;for(;ip<'0'||ip>'9';ip=getchar_unlocked())if(ip=='-'){flag=-1;ip=getchar_unlocked();break;}for(;ip>='0'&&ip<='9';ip=getchar_unlocked())ret=ret*10+ip-'0';return flag*ret;}
int main()
{
    long long int t,m,n,arr[100000],ans = 0,i,g,j,r=0,h,diff;
   // scanf("%lld",&t);
    t=scan_d();
    while(t--)
    {
        long long int l = 0;
        scanf("%lld%lld",&n,&m);
        for(i = 0;i < m;++i)
            scanf("%lld",&arr[i]);
        if(m == 1)
            printf("0\n");
        else if(m == 2)
            printf("1\n");
        else
        {
            //if(l >= (m/2))
            //    cout<<m/2<<endl;
            //else
            //{
                sort(arr,arr+m);
                g = m;
                for(i = 0;i < m;++i)
                {
                    h = arr[i]+2;
                    diff = (g-i);
                    if(h <= diff)
                    {
                        ans += arr[i];

                    }
                    else
                    {
                        ans += diff-1;
                        break;
                    }
                    g = g-(h-2);
                }
                printf("%lld\n",ans);
                ans = 0;
        }


    }
}
