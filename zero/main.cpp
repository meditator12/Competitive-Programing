#include<iostream>
using namespace std;
int main()
{
    long long int t,i,n,ans = 0,c,coun = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 5;i <= n;i = i+5)
        {
            if(i == 5||i == 25||i == 125||i == 625||i == 3125||i == 15625||i == 78125||i == 390625)
            {
                c = i;
                while(c != 1)
                {
                    //cout<<"ds"<<c<<endl;
                    coun++;
                    c = c/5;
                }
                //cout<<"fd"<<coun<<endl;
                ans = ans + coun*i;
                //cout<<"sf"<<ans;
                coun = 0;
            }
            else
            {
                ans = ans+i;
            }
        }
        cout<<ans<<endl;
        ans = 0;
    }
    return 0;
}
