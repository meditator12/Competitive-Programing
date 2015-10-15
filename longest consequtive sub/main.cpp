#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    long long int t,n,arr[100000],arra[100000],l = 1,c = 0,i;
    cin>>t;
    while(t--)
    {
        set<int>s;
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i = 0;i < n;++i)
        {
            if(arr[i+1]-arr[i] == 1)
                ++l;
            else if(arr[i+1]-arr[i] == 0)
                continue;
            else
            {
                arra[c] = l;
                ++c;
                l = 1;
            }
        }
        sort(arra,arra+c);
        cout<<arra[c-1]<<endl;
        c = 0;
        l = 1;
    }
}
