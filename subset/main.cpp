#include<iostream>
#include<math.h>
using namespace std;
unsigned int countSetBitsUtil(unsigned int x)
{
    if (x <= 0)
        return 0;
    return (x %2 == 0? 0: 1) + countSetBitsUtil (x/2);
}
int main()
{
    int t,i,cou = 1,flag = 0,s,n,arr[1000],pos = 1,m,j,sum = 0,total = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i = 1;i <= n;++i)
        {
            cin>>arr[i];
        }
        s = pow(2,n);
       // cout<<s<<endl;
        for(i = 1;i <= s;++i)
        {
            if(flag == 1)
                break;
            else
            {
                total = countSetBitsUtil(i);
                //cout<<"sv"<<total<<endl;
            while(total!=0)
            {
                //cout<<"hello"<<total<<endl;
                if((cou&i))
                {
                    //cout<<"HELLO"<<endl;
                    sum = sum + arr[pos];
                    cou = cou<<1;
                    ++pos;
                    total = total - 1;
                    //cout<<"hard"<<total<<endl;
                }
                else
                {
                    cou = cou<<1;
                    ++pos;
                }
            }
           // cout<<"sum"<<sum<<endl;
            if(sum == m)
                flag = 1;
            else
            {
                sum = 0;
                pos = 1;
                cou = 1;
            }
            }
        }
        if(flag == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        flag = 0;
        total = 0;
        cou = 1;
        pos = 1;
        sum = 0;
    }
    return 0;
}
