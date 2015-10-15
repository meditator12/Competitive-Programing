#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int arr[501][501],i,j,n,t,k,ar[100],a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
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
     //   cout<<"HII"<<arr[1][1]<<endl;
     //   cout<<ar[1]<<" hello"<<endl;
      //  cout<<a[1]<<endl;
        for(i = 1;i <= 3;++i)
        {
            for(j = 1;j <= 3;++i)
            {
                cout<<arr[i][j]<<" ";
                cout<<ar[arr[i][j]]<<" ";
                cout<<a[arr[i][j]]<<endl;
            }
            cout<<endl;
        }
        //for(i = 1;i <= 9;++i)
       //     cout<<ar[i]<<endl;
       /* for(i = 1;i <= k;++i)
        {
            cout<<ar[i]<<" "<<a[i]<<endl;
        }*/

    }
}
