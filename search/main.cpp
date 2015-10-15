#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,m,no,i,arr[100000],lower,upper,mid,flag = 0;
    cin>>n>>m;
    for(i = 1;i <= n;++i)
        cin>>arr[i];
    sort(arr+1,arr+(n+1));
    while(m--)
    {
        cin>>no;
        lower = 1;
        upper = n;
        while(lower<=upper)
        {
            mid = (upper+lower)/2;
            if(arr[mid] == no)
            {
                flag = 1;
                break;
            }
            else if(arr[mid] < no)
            {
                lower = mid+1;
            }
            else
            {
                upper = mid-1;
            }
        }
        if(flag == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        flag = 0;
    }
}
