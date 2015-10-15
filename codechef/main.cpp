#include<iostream>
using namespace std;
int main()
{
    long long int t,i,n,arr[100000],count = 0,ans = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i= 0;i < n;++i)
        {
            cin>>arr[i];
        }
        for(i = 0;i < n;++i)
        {
            if(arr[i+1] >= arr[i])
                ++count;
            else
            {
                ans = ans + ((count*(count+1))/2);
                count = 0;
            }
        }
        cout<<ans+n<<endl;
        ans = 0;
    }
}
