#include<iostream>
#include<vector>
using namespace std;
int main()
/*{
    long long int arr[100000],arra[100000],i,j,m,n,k,l,flag = 0,coun = 0;
    cin>>n>>m>>k>>l;
    for(i = 0;i < n;++i)
        cin>>arr[i];
    for(i = 0;i < m;++i)
        cin>>arra[i];
    for(i = 0;i < m; ++i)
    {
        for(j = 0;j < n;++j)
        {
            if(arra[i] > arr[j])
                ++coun;
            if(coun >= k)
            {
                --l;
                coun = 0;
                break;
            }
        }
        if(l == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    flag = 0;
}*/

{
    long long int i,n,m,k,l,h,flag = 0,c = 0,d = 0,coun = 0;
    vector<int>v1;
    cin>>n>>m>>k>>l;
    for(i = 0;i < n+m;++i)
    {
        cin>>h;
        v1.push_back(h);
    }
    for(i = 0;i < (10000*(n+m));++i)
    {
        if(c == m)
            break;
        if(d == n)
        {
            d = 0;
            ++c;
        }
        if(l == 0)
        {
            flag = 1;
            break;
        }
        if(v1[n+c] > v1[d])
        {
            ++coun;
            if(coun >= k)
            {
                --l;
                coun = 0;
            }
        }
        else if(v1[n+c] <= v1[d])
        {
            ++c;
            d = -1;
            coun = 0;
        }
        ++d;
    }
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    flag = 0;
}
