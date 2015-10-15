#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int t,l,i,sum = 0,mult,mul,su = 0,pro,v,no,diff;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.length();
        for(i = 0;i < l;++i)
        {
            if(s[i] == 'T')
                sum = sum+2;
            else
                sum = sum+1;
        }
        cin>>no;
        mult = 12*no;
        mul = mult / sum;
        for(i = mul;i >= 1;--i)
        {
            pro = sum * i;
            if(pro == mult)
            {
                v = 1 * i;
                su = su+v;
            }
            else
            {
                diff = mult - pro;
                v = diff * i;
                mult = pro;
                su = su+v;
            }
        }
        cout<<su<<endl;
        su = 0;
        sum = 0;
        mult = 0;
        mul = 0;
    }
    return 0;
}
