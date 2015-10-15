#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,coun = 1,i,arr[1000],res[1000],tot = 0,flag = 0,n,j,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 1;i <= n;++i)
        {
            cin>>arr[i];
            tot += arr[i];
            if(arr[i] == n)
                flag = 1;
        }
        if(flag == 1)
        {
            cout<<"-1"<<endl;
            tot = 0;
            flag = 0;
            continue;
        }
        else
        {
            if(tot != n)
            {
                cout<<"-1"<<endl;
                tot = 0;
                continue;
            }
            else
            {
                for(i = 1;i <= n;++i)
                {
                    while(arr[i] != 0)
                    {
                        res[coun] = i;
                        ++coun;
                        arr[i]--;
                    }
                }
                for(i = 1;i <= n;++i)
                {
                    if(res[i] == i)
                    {
                        for(j = i+1;j <= n;++j)
                        {
                            if(res[j] == j)
                            {
                                temp = res[j];
                                res[j] = res[i];
                                res[i] = temp;
                                break;
                            }
                        }
                    }
                }
                for(i = 1;i <= n;++i)
                {
                    if(res[i] == i)
                    {
                        for(j = 1;j <= n;++j)
                        {
                            if(res[j] != res[i])
                            {
                                temp = res[j];
                                res[j] = res[i];
                                res[i] = temp;
                                break;
                            }
                        }
                    }
                }
                for(i = 1;i <= n;++i)
                    cout<<res[i]<<" ";
                cout<<endl;
                flag = 0;
                tot = 0;
                coun = 1;
            }
        }
    }
    return 0;
}
