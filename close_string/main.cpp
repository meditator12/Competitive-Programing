#include<iostream>
using namespace std;
int main()
{
    long long int t,i,j,l,n,no;
    char arr[1000][1000];
    string s;
    cin>>t;
    while(t--)
    {
        int array[30],count = 0,flag = 0;
        cin>>n;
        long long int arra[n][30];
        for(i = 0;i < n;++i)
            for(j = 0;j < 27;++j)
                arra[i][j] = 0;
        for(i = 0;i < n;++i)
            for(j = 0;j < n;++j)
                cin>>arr[i][j];
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < 27;++j)
                cout<<arra[i][j]<<" ";
            cout<<endl;
        }
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < n;++j)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < n;++j){
                int t = int(arr[i][j] - 'a');
                ++arra[i][t];
            }
        }
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < 27;++j)
                cout<<arra[i][j]<<" ";
            cout<<endl;
        }
        cin>>no;
        for(i = 0;i < no;++i)
        {
            cin>>s;
            l = s.length();
            for(i = 0;i < 30;++i)
                array[i] = 0;
            for(i = 0;i < l;++i)
                ++array[s[i] - 'a'];
            for(i = 0;i < 30;++i)
                cout<<array[i]<<" ";
            cout<<endl;
            for(i = 0;i < n;++i)
            {
                if(flag == 1)
                {
                    break;
                }
                for(j = 0;j < 27;++j)
                {
                    if(array[j]<=arra[i][j])
                    {
                        ++count;
                        if(count == 26)
                        {
                            flag = 1;
                            cout<<i+1<<"*"<<i+1<<endl;
                            break;
                        }
                    }
                    else
                    {
                        count = 0;
                        break;
                    }

                }
            }
            flag = 0;
            count = 0;
        }
    }
}
