#include<iostream>
#include<cmath>
#include<cstdio>
typedef long long int ll;
typedef double ld;
ld fast_exp(ld,ll);
#define million 1000000000
using namespace std;
int main()
{
    ld k,sum,y,su,s,p,ans,u;
    ll t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        if(n == 1)
            cout<<"1000000000.0 0.0"<<endl;
        else if(p == 1.0)
        {
            if(n % 2 == 0)
                cout<<"0.0 1000000000.0"<<endl;
            else
                cout<<"1000000000.0 0.0"<<endl;
        }
        else{
                if(n%2 != 0){
            m = (n/2) + 1;
       //     printf("%lld\n",m);
            k = p*p;
     //       printf("%f\n",k);
            sum = 1.0-k;
            u = fast_exp(k,m);
     //                   printf("%f\n",u);
            y = 1.0-u;
            su = y/sum;

            m = n/2;
            u = fast_exp(k,m);
            y = 1.0-u;
            s = p * (y/sum);
            ans = (su - s);
         //   cout<<ans<<endl;
            //cout<<ans*million<<endl;;
           // printf("%f\n",ans);
            printf("%f %f\n",(million*ans),(million-((million*ans))));
                }
                else
                {
                    m = (n/2);
         //   printf("%lld\n",m);
            k = p*p;
       //     printf("%f\n",k);
            sum = 1.0-k;
            u = fast_exp(k,m);
           //             printf("%f\n",u);
            y = 1.0-u;
            su = y/sum;

            m = n/2;
            u = fast_exp(k,m);
            y = 1.0-u;
            s = p * (y/sum);
            ans = (su - s);
           // cout<<ans*1000000<<endl;
          //  ll o = million * ans;
           // cout<<o<<endl;
          //  printf("%f\n",floor(million*ans));

           // printf("%f\n",su);
            printf("%f %f\n",(million*ans),(million-((million*ans))));
                }
        }
    }
}

ld fast_exp(ld base, ll exp)
{
    if(exp==1)
    return base;
    else
    {
        if(exp%2 == 0)
        {
            ld base1 = pow(fast_exp(base, exp/2),2);
            return base1;
        }
        else
        {
            ld ans = (base*  pow(fast_exp(base,(exp-1)/2),2));
            return ans;
        }
    }
}
