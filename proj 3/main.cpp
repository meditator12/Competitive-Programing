#include<iostream>
using namespace std;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        l = s.length();
        for(i = 0;i < l;++i)
        {
            if(s[i] == 'B')
                ++b;
            else
                ++g;
        }
        if((b-g) > 1 ||(g-b) > 1)\
            cout<<"-1"<<endl;
        else if(b > g)
        {

        }
    }
}
