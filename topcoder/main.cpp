#include<iostream>
#include<string.h>
using namespace std;
class CorruptedMessage
    {
    void reconstructMessage(string s,int n)
        {

    int i,l,store,lar = 0;
    char c;
    int arr[26];
    l = s.length();
    memset(arr,0,sizeof arr);
    for(i =0;i < l;++i)
    {
        arr[s[i]-'a'] += 1;
    }
    lar = 0;
    for(i = 0;i < 26;++i)
    {
        if(lar <= arr[i])
        {
            {if((l-arr[i])==n)
            store = i;
            lar = arr[i];}
        }

    }
    if(l == n)
    {
        for(i = 0;i < 26;++i)
            {if(arr[i] == 0)
            {c = i+97;
            break;
            }}
        for(i = 0;i < l;++i)
        cout<<c;
        cout<<endl;
    }
    else
    {
        c = store+97;
        for(i = 0;i < l;++i)
            cout<<c;
        cout<<endl;
    }
}
int main()
{
    int k;
    string s;
    cin>>s>>k;
    reconstructMessage(s,k);
}
};
