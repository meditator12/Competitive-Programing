#include<iostream>
typedef long long int ll;
using namespace std;
int main()
{
    ll n,arr[100000],flag = 0,i,pos,pos1;
    while(1)
    {
        cin>>n;
        if(n == 0)
            break;
        else{
        for(i = 1;i <= n;++i)
            cin>>arr[i];
        for(i = 1;i <= n;++i)
        {
            pos = arr[i];
            pos1 = arr[pos];
           // cout<<pos1<<"    "<<arr[i]<<endl;
            if(arr[pos1] == arr[i])
                continue;
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<"not ambiguous"<<endl;
        else
            cout<<"ambiguous"<<endl;
        flag = 0;
        }
    }
}
