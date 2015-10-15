#include<stack>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int arra[5],arr[6][6],i,j,n,x,y,source,l,flag = 0,count,y1,arrayu[5],flag1 = 0,count1;
    cin>>n;
    for(i = 1;i <= 5;++i)
    {
        arrayu[i] = 0;
        arra[i] = 0;
    }
    for(i = 1;i <= 5;++i)
    {
        for(j = 1;j <= 5;++j)
        {
            arr[i][j] = 0;
        }
    }
    for(i = 1;i <= n;++i)
    {
        cin>>l>>y;
        arr[l][y] = 1;
    }
    cin>>source;
    stack<int>s1;
    s1.push(source);
    while(!s1.empty())
    {
        x=s1.top();
       // cout<<x<<endl;
        s1.pop();
        arra[x] = 1;
        for(i = 1;i <= 5;++i)
        {
            if(arra[i] == 1 && arr[x][i] == 1)
            {
                flag = 1;
                count = i;
                cout<<count<<endl;
                count1 = x;
                break;
            }
            if(arr[x][i] == 1&&arra[i] != 1){
                s1.push(i);
            }
        }
        if(flag == 1)
            {
                cout<<count<<endl;
                for(i = 1;i <= 5;++i)
                {
                arrayu[i] = 0;
                }
                stack<int>s2;
                cout<<count<<endl;
                s2.push(count);
                cout<<count<<"dc"<<endl;
                while(!s2.empty())
                {
                    y1=s2.top();
                    cout<<y1<<endl;
                    s2.pop();
                    arrayu[y1] = 1;
                    for(i = 1;i <= 5;++i)
                    {
                        if(y1 == count1)
                        {
                            flag1 = 1;
                            break;
                        }
                        if(arr[y1][i] == 1&&arra[i] != 1)
                        {
                            s2.push(i);
                        }
                    }
                    if(flag1 == 1)
                        break;
                }
            break;
            }
    }
    return 0;
}
