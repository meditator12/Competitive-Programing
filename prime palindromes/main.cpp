#include<iostream>
#include<string.h>
#include<algorithm>
#define ma 1000000
long long int arr[1000000];
using namespace std;
int main()
{
    long long int i,j;
    memset(arr,0,sizeof(arr));
    for(i = 2;i <= ma;++i)
    {
        arr[i] = 1;
        for(j = i;j <= ma;j = j*i)
        {
            arr[j] = 0;
            cout<<"v";
        }
    }
    for(i = 2;i <= ma;++i)
    {
        if(arr[i] == 1)
            cout<<arr[i]<<endl;
    }

}
