#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,m,arr[101][101],arra[101],i,j,ind = 0,max = 0,ans = 0;
    cin>>n>>m;
    for(i = 1;i <= m;++i)
    {
        for(j = 1;j <= n;++j)
            cin>>arr[i][j];
    }
    for(i = 1;i < 101;++i)
        arra[i] = 0;
    for(i = 1;i <= m;++i)
    {
        ind = 1;
        max = arr[i][1];
        for(j = 2;j <= n;++j)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
                ind = j;
            }
        }
        ++arra[ind];
    }
    for(i = 1;i <= 100;++i)
        cout<<arra[i]<<" ";
    cout<<endl;
    max = arra[1];
    ans = 1;
    for(i = 2;i <= 100;++i)
    {
        if(max < arra[i])
        {
            max = arra[i];
            ans = i;
        }
    }
    cout<<ans<<endl;
}
