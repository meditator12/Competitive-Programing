#include<iostream>
#include<string.h>
#define inf 10000000
using namespace std;
int main()
{
    long long int t,m,l,n,i,j,k,x,y,flag = 0,count1 = 0,arra[20000],count = 0,init,ini,arra1[20000];
    cin>>t;
    while(t--)
    {
        cin>>m>>l>>n;
        long long int arr[m+1][m+1];
        for(i = 1;i <= m;++i)
        {
        for(j = 1;j <= m;++j)
            arr[i][j] = 1;
        }
        for(i = 1;i <= l;++i)
        {
            cin>>x>>y;
            arr[x-1][y-1] = 1;
            arr[y-1][x-1] = 1;
        }
        for(int k=1;k<=m;k++){
		for(int i=1;i<=m;i++){
			for(int j=1;j<=m;j++){
				arr[i][j] = (arr[i][j]||(arr[i][k]&&arr[k][j])) ;}}}
        for(i = 1;i <= m;++i)
        {
            for(j = 1;j <= m;++j)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        for(i =0 ;i < n;++i)
        {
            cin>>arra[i];
            arra1[i] = arra[i];
        }

        for(i = 0;i < n-1;++i)
        {
            if(flag == 1)
                break;
            if(arra[i] > arra[i+1])
            {
                ini = arra[i];
                init = arra[i+1];
                for(j = 0 ; j < init;++j)
                {
                    if(arr[ini-1][j] == 1)
                    {
                        arra[i] = j+1;
                        if(arra[i] <= arra[i+1] && i==0)
                        {
                            ++count;
                            break;
                        }
                        else if(arra[i] <= arra[i+1] && (i != 0 && arra[i] >= arra[i-1]))
                        {
                            ++count;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                if(arra[i] == ini)
                {
                    count = inf;
                    flag = 1;
                    break;
                }
            }
            //cout<<"dg"<<count<<endl;
        }
        flag = 0;
        for(i = n-1;i >= 1;--i)
        {
            //cout<<arra[i]<<endl;
            if(flag == 1)
                break;
            if(arra1[i] < arra1[i-1])
            {
                //cout<<"hello"<<endl;
                ini = arra1[i];
                init = arra1[i-1];
                for(j = m-1 ; j >= init-1;--j)
                {
                    if(arr[ini-1][j] == 1)
                    {
                        arra1[i] = j+1;
                        //cout<<"fdd"<<arra1[i]<<endl;
                        if(arra1[i] >= arra1[i-1] && i == (n-1))
                        {
                            ++count1;
                            break;
                        }
                        else if(arra1[i] >= arra1[i-1] && (i != (n-1) && arra1[i] <= arra1[i+1]))
                        {
                            ++count1;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                if(arra1[i] == ini)
                {
                    count = inf;
                    flag = 1;
                    break;
                }
            }
            //cout<<"fd"<<count1<<endl;
        }
        if(count != 0 && count1 != 0)
        {if(count > count1 )
            cout<<count1<<endl;
        else if(count < count1)
            cout<<count<<endl;
        else if(count == inf && count1 == inf)
            cout<<"-1"<<endl;
        else if(count == count1 && count != inf)
            cout<<count<<endl;
            }
        else if(count == 0)
        {
            if(count1 == inf)
                cout<<"-1"<<endl;
            else
                cout<<count1<<endl;
        }
        else if(count1 == 0)
        {
            if(count == inf)
                cout<<"-1"<<endl;
            else
                cout<<count<<endl;
        }
        else if(count == 0&& count1 == 0)
        {
            cout<<"0"<<endl;
        }
        count = 0;
        count1 = 0;
        flag = 0;
    }
    return 0;
}
