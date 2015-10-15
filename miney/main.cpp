#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    double m,ans;
    long long int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n == 1)
        {
            cout<<"1000000000.0 0.0"<<endl;
        }
        else if(n == 2)
        {
            //ans = 1000000000 * pow(m,(n-1));
            cout<<"500000000.0 500000000.0"<<endl;
          //  cout<<ans<<" "<<ans<<endl;
           // printf("%.2f %.2f\n",ans,ans);
        }
        else if(n > 2)
        {
            ans = 1000000000 * pow(m,(n-1));
            printf("1000000000.0 0.0\n");
        }

    }
}
