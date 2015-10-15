#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    char arra[1000];
    long long int i,l,arr[1000],flag = 0;
    cin>>s>>t;
    l= s.length();
    for(i = 0;i < l;++i)
    {
            arr[i] = t[i] - s[i];
    }
    for(i = 0;i < l;++i)
    {
        if(arr[i] == 0 || arr[i] == 1)
        {
            flag = 1;
            break;
        }
        else
        {
            arra[i] = s[i] + (arr[i] - 1);
        }
    }
    if(flag == 1)
        cout<<"No such string"<<endl;
    else
    {
        for(i = 0;i < l;++i)
            cout<<arra[i];
    }
    return 0;
}
