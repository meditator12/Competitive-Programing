#include<iostream>
using namespace std;
int main()
{
    long long int t,i,l,count = 0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.length();
        for(i = 0;i < l;++i)
        {
            if(s[i] == 'A'||s[i] == 'D' ||s[i] == 'O' ||s[i] == 'P' ||s[i] == 'R'||s[i] == 'Q')
                ++count;
            else if(s[i] == 'B')
                count += 2;
        }
        cout<<count<<endl;
        count = 0;
    }
}
