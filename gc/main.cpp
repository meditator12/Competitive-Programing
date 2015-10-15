#include<iostream>
using namespace std;
int main()
{
    int t,n,arr[100],tot = 0,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int g=0;
        for(i =1 ;i <= n;++i)
        {
            cin>>arr[i];
            tot = tot+arr[i];
        }
        if(tot > n)
            cout<<"-1"<<endl;
        else
        {
            for(i = 1;i <= n;++i)
            {
                for(j = 1;j <= n;++j)
                {
                    if(i != j)
                        if(arr[j]>0)
                        {
                            arr[j]--;
                            cout<<j<<" ";
                            g=1;
                            break;
                        }
                }
                if(g==0)
                {
                    cout<<"-1";
                    break;
                }

            }
        }
        cout<<endl;
        tot = 0;
    }
}
