#include<iostream>
using namespace std;
int main()
{
    long long int t,i,n,m,flag = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i = 1;i <= m;++i)
        {
            if(n == i)
            {
                if(m % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            else if(i > m)
            {
                break;
            }
        }
        if(flag == 1)
            cout<<"CORRECT"<<endl;
        else
            cout<<"WRONG"<<endl;
        flag = 0;
    }
    return 0;
}
