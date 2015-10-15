#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    string s;
    long long int t,i,count = 0,l;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.length();
        sort(s.begin(),s.end());
        for(i = 0;i < l;++i)
        {
            //cout<<s[i]<<endl;
            if(s[i] == '4')
            {
                ++count;
                //cout<<s[i]<<endl;
            }
                //;
            else if(s[i] == '5')
                break;
        }
        cout<<count<<endl;
        count = 0;
    }
}
