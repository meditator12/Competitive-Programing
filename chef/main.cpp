#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,arr[1000],arra[1000],i,j,n,m,k = 0,st;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i = 0;i < m;++i)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        for(i = 1;i <= n;++i)
        {
            for(j = 0;j < m;++j)
            {
                if(i == arr[j])
                    break;
                else if(i < arr[j])
                {
                    arra[k] = i;
                    ++k;
                    break;
                }
                else if(i > arr[j])
                    continue;
            }
        }
        if(k != (n-m))
        {
            st = arr[m-1];
            {
                for(i = st+1;i <= n;++i)
                {
                    arra[k] = i;
                    ++k;
                }
            }
        }
        for(i = 0;i < k;i = i+2)
        {
            cout<<arra[i]<<" ";
        }
        cout<<endl;
        for(i = 1;i < k;i = i+2)
        {
            cout<<arra[i]<<" ";
        }
        cout<<endl;
        k = 0;
    }
    return 0;
}
