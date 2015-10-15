#include<iostream>
using namespace std;
int main()
{
    long long int n,t,i,j,ind = 0,maxi = 0,tot = 0,arr[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        for(i = 0;i < n;++i)
        {
            maxi = 0;
            ind = 0;
            for(j = 0;j < n;++j)
            {
                if(arr[j] >= maxi)
                {
                    maxi = arr[j];
                    ind = j;
                }
            }
                if(arr[ind - 1] != 0 || ind == 0)
                {
                    tot = tot + maxi;
                    arr[ind] = 0;
                    arr[ind - 1] = 0;
                }
        }
        cout<<tot<<endl;
        tot = 0;
        maxi = 0;
        ind = 0;
    }
    return 0;
}
