#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int y = 13;
    cout<<(y&(-y));
    long int sum,add,i,j,k,l,x,freq[10000],tree[10000],n,m;
    cin>>n;
    for(i = 0;i <= n;++i)
        cin>>freq[i];
    //building
    for(i = 1;i < n;++i)
    {
        add = freq[i];
        j = i;
        while(j<=n-1)
        {
            tree[j] += add;
            j = j+(j&(-j));
        }
    }
    cout<<"tree initially is"<<endl;
    for(i = 0;i < n;++i)
        cout<<tree[i]<<" ";
    cout<<endl;
    cin>>m;
    while(--m)
    {
        cin>>k;
        if(k == 1)
        {
            cin>>l>>x;
            while(l<=n-1)
            {
                tree[l]-=x;
                l = l+(l&(-l));
            }
            cout<<"tree is "<<endl;
            for(i = 0;i < n;++i)
                cout<<tree[i]<<" ";
            cout<<endl;
        }
        else
        {
            cin>>l;
            sum = 0;
            while(l>0)
            {
                sum = sum + tree[l];
                l = l-(l&(-l));
            }
            cout<<sum<<endl;
        }
    }
}
