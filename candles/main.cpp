#include<iostream>
using namespace std;
int main()
{
    cin>>t;
    while(t--)
    {
        for(i = 0;i < 10;++i)
            cin>>arr[i];
        if(arr[0] != 0)
        {
            mini = arr[1];
            k = 1;
            for(i = 2;i < 10;++i)
            {
                if(arr[i] < mini)
                {
                    mini = arr[i];
                    k = i;
                }
            }
            if(mini == 0)
                cout<<k<<endl;
            else
            {
                for(i = 0;i <= mini;++i)
                    cout<<k;
                cout<<endl;
            }
        }
        else if(arr[0] == 0)
        {
            for(i = +n)
        }
    }
}
