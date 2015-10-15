#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int i,te,n,flag = 0,j,cou = 0,k = 0;
    char arr[100],h,t,arra[100];
    string s;
    cin>>te;
    while(te--)
    {
        cin>>n;
        cin>>s;
        for(i = 0;i < n;++i)
            arr[i] = s[i];
        sort(arr,arr+n);
        k = 0;
        for(i = 0;i < n;++i)
        {
            if(s[i] == arr[i])
            {
                continue;
            }
            else
            {
                k = i;
                h = arr[i];
                break;
            }
        }
        for(i = k;i < n;++i)
        {
            if (flag == 1)
                break;
            else if(s[i] == h)
            {
                cout<<"vs"<<k<<i<<endl;
                flag = 1;
                if(k == 0)
                {


                    arra[0] = s[i];
                    cou = 1;
                    for(j = 0;j < i;++j)
                    {
                        arra[cou] = s[j];
                        ++cou;
                    }
                    for(j = i+1;j < n;++j)
                    {
                        arra[cou] = s[j];
                        ++cou;
                    }
                }
                else
                    {
                        arra[k] = s[i];
                        cou = 0;
                        for(j = 0;j < i;++j)
                    {
                        if(cou == k)
                            ++k;
                        else{arra[cou] = s[j];
                        ++cou;}

                    }
                    for(j = i+1;j < n;++j)
                    {
                        arra[cou] = s[j];
                        ++cou;
                    }
                    }
            }
        }

        for(i = 0;i < n;++i)
            cout<<arra[i];
        cout<<endl;
        cou = 0;
    }
    return 0;
}
