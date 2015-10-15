#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
long long int a[250010],ar[250010];
using namespace std;
int main()
{
    long long int arr[502][502],i,j,n,t,k,sub,sub1,ans = 0;
    cin>>t;
    while(t--)
    {
        memset(ar,0,sizeof(ar));
        memset(a,0,sizeof(a));
        cin>>n;
      //  long long int arr[n+10][n+10];
        for(i = 1;i <= n;++i)
        {
            for(j = 1;j <= n;++j)
            {
                cin>>arr[i][j];
                ar[arr[i][j]] = i;
                a[arr[i][j]] = j;
                //cout<<ar[arr[i][j]]<<" "<<a[arr[i][j]]<<endl;
            }
        }
        k = n*n;
     //   cout<<endl;
     //   cout<<"HII"<<arr[1][1]<<endl;
     //   cout<<ar[1]<<" hello"<<endl;
      //  cout<<a[1]<<endl;
       /* for(i = 1;i <= n;++i)
        {
            for(j = 1;j <= n;++j)
            {
                cout<<arr[i][j]<<" ";
                cout<<ar[arr[i][j]]<<" ";
                cout<<a[arr[i][j]]<<" \t";
            }
            cout<<endl;
        }
        cout<<endl;*/
        for(i = 1;i <= (k-1);++i)
        {
            //cout<<ar[i]<<" "<<a[i]<<endl;
            sub = abs(ar[i+1]-ar[i]);
            sub1 = abs(a[i+1]-a[i]);
            //cout<<sub+sub1<<endl;
            ans += (sub+sub1);
        }
        cout<<ans<<endl;
        ans = 0;
        //for(i = 1;i <= 9;++i)
       //     cout<<ar[i]<<endl;
       /* for(i = 1;i <= k;++i)
        {
            cout<<ar[i]<<" "<<a[i]<<endl;
        }*/

    }
    return 0;
}
