#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n,i,h,arr[26];
    char ch;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        memset(arr,0,sizeof arr);
        for(i = 0;i < n;++i)
        {
            h = s[i];
            arr[h-97] += 1;
        }
        for(i = 0;i < 26;++i)
        {
            if(arr[i] % 2 != 0)
            {
                ch = i + 97;
                cout<<ch<<endl;
            }
        }

    }
    return 0;
}
