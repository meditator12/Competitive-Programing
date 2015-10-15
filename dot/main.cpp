#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int l,m,h,i,j,coun = 0;
    char k;
    string s;
    cin>>l>>m;
    cin>>s;
    for(j = 1;j <= m;++j)
    {
        cin>>h>>k;
        s[h-1] = k;
        for(i = 0;i < l;++i)
        {
            if(s[i] == '.' && s[i+1] == '.')
            {
                    ++coun;
            }
        }
        cout<<coun<<endl;
        coun = 0;
    }
}
