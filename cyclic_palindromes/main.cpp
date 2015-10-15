#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int arra[100],flag = 0,flag1 = 0,flag2 = 0,j,i,t,ans = 0,l,cou = 0,m;
    string s;
    char arr[100],temp;
    cin>>t;
    while(t--)
    {
        memset(arr,0,sizeof(arra));
        cin>>s;
        l = s.length();
        for(i = 0;i < l;++i)
        {
            ++arra[s[i]-'a'];
        }
        if(l%2==0)
        {
            for(i = 0;i < 27;++i)
            {
                if(arra[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }

        }
        else
        {
            for(i = 0;i < 27;++i)
            {
                if(arra[i] % 2 != 0)
                    ++cou;
                if(cou == 2)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i = 0;i < l;++i)
                arr[i] = s[i];
            while(1)
            {

                temp = arr[l-1];
                for(j = l-1;j > 0;--j)
                    arr[j] = arr[j-1];
                arr[0] = temp;
                m = l/2;
                for(j = 0;j < m;++j)
                {
                    if(arr[j] == arr[l-(j+1)])
                        continue;
                    else
                    {
                        flag2 = 1;
                        break;
                    }
                }
                ++ans;
                if(ans == l)
                {
                    flag1 == 2;
                    break;
                }
                if(flag2 == 1)
                    continue;
                else
                    break;
            }
            if(flag1 == 2)
                cout<<"-1"<<endl;
            else
                cout<<ans<<endl;

        }
        flag = 0;
        flag2 = 0;
        flag1 = 0;
        ans = 0;
        cou = 0;
    }
}
