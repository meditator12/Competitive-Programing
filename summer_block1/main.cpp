#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,m,k,i,j,ans = 0,ans1 = 0,arr[100],arra[100],diff;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        vector<int>v1;
        cin>>n>>m>>k;
        for(i = 0;i < m;++i)
            cin>>arr[i];
        for(i = 0;i < k;++i)
            cin>>arra[i];
            for(i = 0;i < m;++i)
            {
                for(j = 0;j < k;++j)
                {
                    if(arr[i] == arra[j])
                    {
                        ++ans;
                        break;
                    }
                }
            }
            for(i = 1;i <= n;++i)
            {
                for(j = 0;j < m;++j)
                {
                    if(i == arr[j])
                        break;
                    else if(i != arr[j]&&arr[j]>i)
                    {
                        v.push_back(i);
                        cout<<"d"<<i<<endl;
                        break;
                    }
                }
            }
            for(i = 1;i <= n;++i)
            {
                for(j = 0;j < k;++j)
                {
                    if(i == arra[j])
                        break;
                    else if(i != arra[j]&&arra[j]>i)
                    {
                        v1.push_back(i);
                        break;
                    }
                }
            }
            for(i = 0;i < v1.size();++i)
            {
                for(j = 0;j < v.size();++j)
                {
                    if(v1[i] == v[j])
                    {
                        ++ans1;
                        break;
                    }
                }
            }
            //for(i = 0;i < v.size();++i)
              //  cout<<"ds"<<v[i]<<endl;
            cout<<ans<<" "<<ans1<<endl;
            ans = 0;
            ans1 = 0;
    }
    return 0;
}
