#include<cstdio>
#include<iostream>
long long int product(long long int,long long int);
using namespace std;
int main()
{
    long long int t,i,n,x,y,s = 0,g;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        for(i=1;i<=n;++i)
        {
            g = (y-x) + i;
            s = (s+product(g,i))%1000003;
        }
        cout<<s<<endl;
        s = 0;
    }

}
   long long int product(long long int x,long long int y)
   {
      long long int j,p;long long int res=1;
      if(x-y<y)
      p=x-y;
      else
      p=y;
      for(j=1;j<=p;j++)
       res=(res*x--)/j;
  return res;
       }
