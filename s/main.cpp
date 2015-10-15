#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10000],arra[10000],ar[10000],i,n,t,coun = 1,c = 0,ci = 0,largest = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i = 0;i < n;++i)
        {
            if(arr[i] == arr[i+1])
            {
                coun++;
            }
            else
            {
                arra[c] = coun;
                ar[c] = arr[i];
                ++c;
                coun = 1;
            }
        }
        for(i = 0;i < c;++i)
        {
            if(largest < arra[i])
            {
                largest = arra[i];
                ci = ar[i];
            }
            else if(largest == arra[i])
            {
                if(ci > ar[i])
                    ci = ar[i];
            }
        }
        cout<<ci<<" "<<largest<<endl;
        largest = 0;
        ci = 0;
        coun = 1;
        c = 0;
    }
    return 0;
}
