#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,arr[100000],i,coun;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        sort(arr,arr+n);
        if(n == 1)
        {
            cout<<"0"<<endl;
            continue;
        }
        else if(n == 2)
        {
            if(arr[0] == 0&&arr[1] == 1)
            {
                cout<<"1"<<endl;
                break;
            }
            else if(arr[0] == 0&&arr[1] == 0)
            {
                cout<<"2"<<endl;
                break;
            }
            else if(arr[0] == 1&&arr[1] == 1)
            {
                cout<<"0"<<endl;
                break;
            }
        }
        else if(n > 2)
        {
            for(i = 0;i < n;++i)
            {
                if(arr[i] == 1)
                {
                    coun = n-i;
                    break;
                }
            }
            if(coun % 2 == 0)
            {
                cout<<n-coun<<endl;
            }
            else
            {
                cout<<coun<<endl;
            }
        }
    }
    return 0;
}
