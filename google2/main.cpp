#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int t,n,i,j,total = 0,arr[10000],arra[10000],ans[10000],c = 0,min = 0,m,siz,mi = 0,nos = 0,mini = 0,minim = 0,counter = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        for(i = 0;i < n;++i)
        {
            cin>>arr[i];
            arra[i] = arr[i];
            total += arr[i];
        }
        if(n == 1)
        {
            if(arr[0] % 2==0)
            minim = (arr[0]/2) + 1;
            else
                minim = (arr[0]/2)+2;
         }
        sort(arr,arr+n);
        mini = arr[n-1];
        while(total!=0)
        {
            //cout<<total<<endl;
            nos = 0;
            for(i = 0;i < n;++i)
            {
                if(arr[i] == 0||arr[i] == 1)
                    ++nos;
            }
            ++c;
            //cout<<"sd"<<c<<endl;
            if(c % 2 != 0 || nos == n)
            {
                //cout<<"ds"<<endl;
                ++min;
                if(v.empty())
                {
                    for(j = 0;j < n;++j)
                    {
                        if(arr[j] != 0)
                        {
                            arr[j] -= 1;
                            ++mi;
                        }

                    }
                   // for(j = 0;j < n;++j)
                   //     cout<<arr[j]<<endl;
                   //cout<<total<<""<<n<<endl;
                    total = total - mi;
                    //cout<<"total"<<total<<endl;
                    mi = 0;
                }
                else
                {

                    for(j = 0;j < n;++j)
                    {
                        if(arr[j] != 0)
                        {
                            arr[j] -= 1;
                            ++mi;
                        }

                    }
                    for(j = 0;j < v.size();++j)
                    {
                        if(v[j] != 0)
                        {
                            v[j] -= 1;
                            ++mi;
                        }
                    }
                    total -= mi;
                    mi = 0;
                }
            }
            else
            {
                ++min;
                if(v.empty())
                {
                    sort(arr,arr+n);
                    m = arr[n-1];
                    if(m%2 == 0)
                    {
                        arr[n-1] = m/2;
                        v.push_back(arr[n-1]);
                    }
                    else
                    {
                        arr[n-1] = (m/2)+1;
                        v.push_back(m/2);
                    }
                }
                else
                {
                    siz = v.size();
                    sort(v.begin(),v.end());
                    sort(arr,arr+n);
                    if(arr[n-1] >= v[siz-1])
                    {
                        m = arr[n-1];
                        if(m%2 == 0)
                        {
                            arr[n-1] = m/2;
                            v.push_back(arr[n-1]);
                        }
                        else
                        {
                            arr[n-1] = (m/2)+1;
                            v.push_back(m/2);
                        }
                    }
                    else
                    {
                        m = v[siz-1];
                        if(m%2 == 0)
                        {
                            v.push_back(m/2);
                            v.push_back(m/2);
                        }
                        else
                        {
                            v.push_back((m/2)+1);
                            v.push_back(m/2);
                        }
                    }
                }
            }
        }
        if(minim <= min &&minim <= mini && minim != 0)
        {
            ans[counter] = minim;
            ++counter;
            minim = 0;
            min = 0;
            mini = 0;
            total = 0;
            mi = 0;
            nos = 0;
            c = 0;
        }
        else if(min <= minim && min <= mini && minim != 0)
            {ans[counter] = min;
            ++counter;
            minim = 0;
            min = 0;
            mini = 0;
            total = 0;
            mi = 0;
            nos = 0;
            c = 0;}
        else if(mini <= minim && mini <= min && minim != 0)
            {ans[counter] = mini;
            ++counter;
            minim = 0;
            min = 0;
            mini = 0;
            total = 0;
            mi = 0;
            nos = 0;
            c = 0;
            }
        else if(minim == 0)
        {
            if(mini <= min)
                {ans[counter] = mini;
            ++counter;
            minim = 0;
            min = 0;
            mini = 0;
            total = 0;
            mi = 0;
            nos = 0;
            c = 0;
            }
            else
            {ans[counter] = min;
            ++counter;
            minim = 0;
            min = 0;
            mini = 0;
            total = 0;
            mi = 0;
            nos = 0;
            c = 0;}
        }
    }
    for(i = 0;i < counter;++i)
        cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
    return 0;
}
