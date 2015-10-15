#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    char in;
    long long int l,i,c=1,lar=0;
    cin>>s;
    l = s.length();
    sort(s.begin(),s.end());
    for(i = 0;i < l;++i)
    {
        if(s[i] == s[i+1])
        {
            c=c+1;
        }
        else
        {
            if(c>lar)
            {
                lar = c;
                in = s[i];
            }
            c=1;
        }
    }
    cout<<in<<endl;
}
