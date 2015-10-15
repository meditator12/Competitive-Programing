#include<iostream>
#include<string.h>
#include<math.h>
long long int arr[1000000];
using namespace std;
int main()
{
    long long int i,j,m,s = 0;
    memset(arr,0,sizeof(arr));
    m = sqrt(1000000);
    for(i = 2;i <= m;++i)
    {
        if(arr[i] != 1)
            arr[i] = 0;
        for(j = i*i;j <= 1000000;j = j+i)
        {
            arr[j] = 1;
        }
    }
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(arr[n] == 0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
