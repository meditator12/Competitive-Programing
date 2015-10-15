#include<stack>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int arra[5],arr[6][6],i,j,n,x,y,source,l,flag = 0;
    cin>>n;
    for(i = 1;i <= 5;++i)
        arra[i] = 0;
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
        cout<<x<<endl;
        s1.pop();
        arra[x] = 1;
        for(i = 1;i <= 5;++i)
        {
            if(arra[i] == 1)
            {
                cout<<"ds"<<i<<endl;
                flag = 1;
                break;
            }
            if(arr[x][i] == 1&&arra[i] != 1){
                s1.push(i);
            }
        }
        if(flag == 1)
            break;
    }
    return 0;
}
