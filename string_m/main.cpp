#include<iostream>
#include<string.h>
#include<cstdio>
#define mod 1000000007
//inline int scan_d()    {register int ip=getchar_unlocked(),ret=0,flag=1;for(;ip<'0'||ip>'9';ip=getchar_unlocked())if(ip=='-'){flag=-1;ip=getchar_unlocked();break;}for(;ip>='0'&&ip<='9';ip=getchar_unlocked())ret=ret*10+ip-'0';return flag*ret;}
using namespace std;
int main()
{
    long long int arr[30],arra[30],i,l,len,ans = 1,t,flag = 0;
    char s[100000],k[100000];
    //t = scan_d();
    cin>>t;
    while(t--)
    {
        memset(arr,0,sizeof(arr));
        memset(arra,0,sizeof(arra));
        //cin>>s>>k;
        scanf("%s%s",s,k);
        l = strlen(s);
        len = strlen(k);
        for(i = 0;i < len;++i)
            ++arr[k[i]-'a'];
        for(i = 0;i < l;++i)
            ++arra[s[i]-'a'];
        for(i = 0;i < 26;++i)
        {
            if(arra[i] >= arr[i] && arra[i] != 0 && arr[i] != 0 && arr[i] == 1)
            {
                ans = (ans * (arra[i]%mod))%mod;
                //cout<<"Hello"<<endl;
            }
            else if(arra[i] < arr[i])
            {
                flag = 1;
                break;
            }
            else if(arra[i] >= arr[i] && arra[i] != 0 && arr[i] > 1)
            {
                t = ((((arra[i] - arr[i])%mod)+1)*arra[i])%mod;
                ans = ((ans%mod)*t)%mod;
            }

        }
        if(flag == 1)
            ans = 0;
      //  cout<<ans<<endl;
        printf("%lld\n",ans);
        ans = 1;
        flag = 0;
    }
}
