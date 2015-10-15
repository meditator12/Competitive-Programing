#include<iostream>
#include<cstdio>
#include<map>
#include<string.h>
using namespace std;
// long int arr[100000001];
long long int coin(long long int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else if(arr[n] != -1)
    {
        return arr[n];
    }
    arr[n] = coin(n/2) + coin(n/3) + coin(n/4);
    if(arr[n] < n)
    {
        arr[n] = n;
    }
    return arr[n];
}
int main()
{
    map<int,int>arr;
    long long int i;
    for(i = 0;i < 1000000001;++i)
        arr[i] = -1;
    for(i =0 ;i < 100;++i)
        cout<<arr[i]<<endl;
    long long int n;
    while(1)
    {
        scanf("%lld",&n);
            printf("%lld\n",coin(n));
    }
    return 0;
}
