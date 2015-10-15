#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t,s,c,k,ans = 0,diff,coun,i;
    cin>>t;
    while(t--)
    {
        cin>>s>>c>>k;
        if(s == 0 && c == 0)
            cout<<"0"<<endl;
        else if((k>1)&&(s==0))
            cout<<"0"<<endl;
        else if((k>s)&&(k>1))
            cout<<"0"<<endl;
        else
        {
            if(s>c)
            {
                diff = s-k;
                coun = pow(2,diff);
                ans = coun * 2 + 1;
                if(diff<c)
                {
                    ans = ans + (coun * 2);
                    cout<<ans<<endl;
                }
                else
                {
                    cout<<ans<<endl;
                }
            }
            else if(s == c)
            {
                coun = pow(2,(s-k));
                ans = 2 * coun + 1;
                ans = ans + (2*coun);
                cout<<ans<<endl;
            }
            else if(s<c)
            {
                if(s == 0)
                {
                    for(i = 0;i < c;++i)
                    {
                        coun = (pow(2,i));
                        ans = ans + (2*coun);
                    }
                    cout<<ans<<endl;
                }
                else if(k>1)
                {
                    coun = pow(2,(s-k));
                    ans = 2 * coun + 1;
                    ans = ans + (2*coun);
                    cout<<ans<<endl;
                }
                else if(k == 1)
                {
                    coun = pow(2,(s-1));
                    ans = 2*coun+1;
                    diff = s - 1;
                    for(i = diff;i < c;++i)
                    {
                        coun = (pow(2,i));
                        ans = ans + (2*coun);
                    }
                    cout<<ans<<endl;
                }
            }
        }
        ans = 0;
    }
    return 0;
}
