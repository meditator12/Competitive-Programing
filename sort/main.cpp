#include<iostream>
using namespace std;
int main()
{
    long long int t,i,coun = 1,arr[100000],n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        for(i = 0;i < n-1;++i)
        {
            if(arr[i] < arr[i+1])
            {
                arr[i+1] = arr[i];
            }
            else if(arr[i] >= arr[i+1])
                {++coun;}
        }
        cout<<coun<<endl;
        coun = 1;
    }
    return 0;
}
