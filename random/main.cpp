#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    long long int sum = 0,l,i,arr[1000],t;
    cin>>t;
    while(t--)
    {
        memset(arr,0,sizeof(arr));
        cin>>s;
        l = s.length();
        for(i = 0;i < l;++i)
        {
            //cout<<arr[s[i]-'a']<<" ";
            ++arr[s[i]-'a'];
            //cout<<arr[s[i]-'a']<<endl;
        }
       // for(i = 0;i < 26;++i)
       //     cout<<arr[i]<<endl;
        sort(arr,arr+26);
        reverse(arr,arr+26);

       // for(i = 0;i < 26;++i)
       //     cout<<arr[i]<<" ";
       // cout<<endl;
        for(i = 1;i < 26;++i)
            sum = sum+arr[i];
        if(arr[0] == sum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        sum = 0;
    }
}
