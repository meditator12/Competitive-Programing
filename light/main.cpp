#include<iostream>
long long int arr[600000][4];
using namespace std;
int main()
{
    long long int max,x,i,n,island,island1,island2,island3,se = 0,sw = 0,ne = 0,nw = 0,pos,pos1;
    int t,flag = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i][0]>>arr[i][1];
        if(n == 1)
        {
            cout<<"1"<<endl;
            cout<<"1 NE"<<endl;
        }
        else{
        max = 0;
        x = arr[0][0];
        for(i = 0;i < n;++i)
        {
            if(arr[i][1] > max)
            {
                max = arr[i][1];
                island = i;
                x = arr[i][0];
            }
            else if(arr[i][1] == max)
            {
                if(arr[i][0] <= x)
                {
                    max = arr[i][1];
                    island = i;
                    x = arr[i][0];
                }
            }
        }
        x = arr[0][0];
        for(i = 0;i < n;++i)
        {
            if(arr[i][1] > max)
            {
                max = arr[i][1];
                island2= i;
                x = arr[i][0];
            }
            else if(arr[i][1] == max)
            {
                if(arr[i][0] >= x)
                {
                    max = arr[i][1];
                    island = i;
                    x = arr[i][0];
                }
            }
        }
        max = 0;
        x = arr[0][0];
        for(i = 0;i < n;++i)
        {
            if(arr[i][1] < max)
            {
                max = arr[i][1];
                island1 = i;
                x = arr[i][0];
            }
            else if(arr[i][1] == max)
            {
                if(arr[i][0] >= x)
                {
                    max = arr[i][1];
                    island1 = i;
                    x = arr[i][0];
                }
            }
        }
        max = 0;
        x = arr[0][0];
        for(i = 0;i < n;++i)
        {
            if(arr[i][1] < max)
            {
                max = arr[i][1];
                island3 = i;
                x = arr[i][0];
            }
            else if(arr[i][1] == max)
            {
                if(arr[i][0] >= x)
                {
                    max = arr[i][1];
                    island1 = i;
                    x = arr[i][0];
                }
            }
        }
        max = arr[island][0];
        for(i = 0;i < n;++i)
        {
            if(arr[i][0] < max)
                ++sw;
            else if(arr[i][0] > max)
                ++se;
        }
        for(i = 0;i < n;++i)
        {
            if(arr[i][0] == max)
            {
                if(sw == 0)
                    ++se;
                else
                    ++sw;
            }
        }
        cout<<"SE-> "<<se<<" "<<"SW-> "<<sw<<endl;
        if(se == 0 && sw != 0)
        {
            flag = 1;
            cout<<"1"<<endl;
            cout<<island+1<<" "<<"SW"<<endl;
        }
        else if(sw == 0 && se != 0)
        {
            flag = 1;
            cout<<"1"<<endl;
            cout<<island+1<<" "<<"SE"<<endl;
        }
        else if(se == 0 && sw == 0)
        {
            flag = 1;
            cout<<"1"<<endl;
            cout<<island+1<<" "<<"SW"<<endl;
        }
        if(flag == 0)
        {
            max = arr[island1][0];
            for(i = 0;i < n;++i)
            {
                if(arr[i][0] < max)
                    ++nw;
                else if(arr[i][0] > max)
                    ++ne;
            }
            for(i = 0;i < n;++i)
            {
                if(arr[i][0] == max)
                {
                    if(nw == 0)
                        ++ne;
                    else
                        ++nw;
                }
            }
            cout<<"NE-> "<<ne<<" "<<"NW-> "<<nw<<endl;
            if(ne == 0 && nw != 0)
            {
                flag = 2;
                cout<<"1"<<endl;
                cout<<island1+1<<" "<<"NW"<<endl;
            }
            else if(nw == 0 && ne != 0)
            {
                flag = 2;
                cout<<"1"<<endl;
                cout<<island1+1<<" "<<"NE"<<endl;
            }
            else if(ne == 0 && nw == 0)
            {
                flag = 2;
                cout<<"1"<<endl;
                cout<<island1+1<<" "<<"NW"<<endl;
            }
        }
        if(flag == 0)
        {
            pos = arr[island][0];
            pos1 = arr[island1][0];
            if(pos == pos1)
            {
                cout<<"2"<<endl;
                cout<<island+1<<" "<<"SE"<<endl;
                cout<<island1+1<<" "<<"NW"<<endl;
            }
            else if(pos < pos1)
            {
                cout<<"2"<<endl;
                cout<<island+1<<" "<<"SE"<<endl;
                cout<<island1+1<<" "<<"NW"<<endl;
            }
            else if(pos > pos1)
            {
                cout<<"2"<<endl;
                cout<<island+1<<" "<<"SW"<<endl;
                cout<<island1+1<<" "<<"NE"<<endl;
            }
        }
        flag = 0;
        sw = 0;
        se = 0;
        ne = 0;
        nw = 0;
        }
    }
}
