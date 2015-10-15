#include<iostream>
#include<cstdio>
#include<math.h>
#define pr 1000000007
#define ull signed long long int
using namespace std;
ull fast_pow(ull base, ull n,ull M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    ull halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
ull ee(ull n,ull M)
{
    return fast_pow(n,M-2,M);
}


int main()
{
    cout<<ee(33,pr);
    signed long long int n,k,t,flag = 0,tes,i;
    signed long long int p = 1.0;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        if(n == 1||n == 2)
            cout<<"1"<<endl;

        else if(k == 1)
        {
                p = p*((n*n)/2);
                cout<<p<<" ";
              tes = sqrt(n);
              for(i=2; i <= tes ; i++){
            while(n%i == 0) {
            n = n/i;
            flag = 1;}
            if(flag == 1){
            p = p*((i-1)%pr);
            cout<<"fd"<<p<<endl;
            p = p%pr;
            cout<<p<<endl;
            signed long long int d,v1,v2;
            d = ee(i,pr);
            //cout<<v2;
            while(d<0)
                d=d+pr;
            //cout<<" edef"<<v2<<endl;
            p = p*(d%pr);
            p = p%pr;
            //cout<<" "<<p<<endl;
            }
            flag = 0;
            }
            if(n > 1)
            {
                p = p*((n-1)%pr);
                p = p%pr;
                cout<<p<<endl;
                signed long long int d,v1,v2;
                d = ee(n,pr);
                while(d<0)
                    d=d+pr;
                p = p*(d%pr);
                p = p%pr;
                //printf("%.1f\n",p);
            }
            printf("%lld\n",p);
            flag = 0;
            p = 1;
        }
    }
}
