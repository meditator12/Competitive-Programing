#include<iostream>
#include<string.h>
#include<math.h>
#include<sstream>
typedef long long int ll;
int palindrome(ll);
long long int arr[10000000],palind[10000000];
using namespace std;
int main()
{
    long long int i,j,m,s = 0,x,n;
    memset(arr,0,sizeof(arr));
    memset(arr,0,sizeof(palind));
    m = sqrt(10000000);
    for(i = 2;i <= m;++i)
    {
        if(arr[i] != 1)
            arr[i] = 0;
        for(j = i*i;j <= 10000000;j = j+i)
        {
            arr[j] = 1;
        }
    }
    /*for(i = 2;i <= 10000000;++i)
    {
        if(arr[i] == 0)
        {
            x = palindrome(i);
            if(x == 1)
                palind[i] = 1;
        }
    }*/
    cin>>n;
    for(i = n;i < 10000000;++i)
    {
        if(arr[i] == 0)
        {
            x = palindrome(i);
            if(x == 1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
int palindrome(ll n)
{
    ll i,m,l,flag = 0;
    string str;
    ostringstream temp;
    temp<<n;
    str=temp.str();
    l = str.length();
    m = l/2;
    for(i = 0;i < m;++i)
    {
        if(str[i] == str[l-(i+1)])
            continue;
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        return 0;
    else
        return 1;
}
