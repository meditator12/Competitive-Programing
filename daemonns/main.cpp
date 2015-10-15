#include<iostream>
#include<string.h>
#include<algorithm>
#define MOD 1000000007
long long nCr(long long,long long);
long long nPr(long long,long long);

int main()
{
   long long int g,h,n,m,t,result;
   std::cin>>t;
   while(t--)
   {
       std::cin>>n>>m;
       g = n/2;
       h = m/2;
       result = (nCr(g,h) % MOD) + (nPr(g,h) % MOD);
       std::cout<<result<<"\n";
   }
}
   long long nCr(long long n,long long r)
   {
       long long j,ans=1;

       if (r>n/2)
       r=n-r;

       for (j=0;j<r;j++)
       {ans*=(n-j) ;
       ans/=j+1;
       ans%=MOD;
       }
       return ans;
   }


   long long nPr(long long g,long long h)
{
   long long int num;
   int t,i,n,k;
       num=1;
       for(i=g;i>(g-h);i--)
       num=(num*i)%1000000007;
   return num;
}
