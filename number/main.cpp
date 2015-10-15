#include<iostream>
#include<string.h>
#include<cstdio>
#include<math.h>
long long int sod(long long int);
long long int arr[1000000];
using namespace std;
int main()
{
    long long int i,j,m,s = 0,ans = 0,arra[100000],re,count = 0,t,n,r,sum=0,ansa[100000],u = 0,copy,copy1,temp,temp1,f,flag = 0,flag1 = 0;
    memset(arr,0,sizeof(arr));
    m = sqrt(1000000);
    for(i = 2;i <= m;++i)
    {
        if(arr[i] != 1)
            arr[i] = 0;
        for(j = i*i;j <= 1000000;j = j+i)
        {
            arr[j] = 1;
        }
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        copy = n;
        copy1 = n;
        sum = sod(n);
        if(arr[sum] == 0 || sum == 1)
        {
            ansa[u] = 1;
            ++u;
        }
           // cout<<"Seymour"<<endl;
        else
        {
            while(1){
                    count = 0;
            re = copy1;
            cout<<copy<<" "<<copy1<<" "<<re<<" "<<endl;
            for(i = 2;i <= sqrt(copy);++i)
            {
                if(copy%i == 0)
                {
                    //cout<<i<<endl;
                    arra[count] = i;
                    ++count;
                }
                while(copy%i == 0)
                {
                    copy=copy/i;
                }
            }
            if(copy > 2)
                arra[count] = sum;
            for(i = 0;i < count;++i)
                cout<<arra[i]<<endl;
            for(i = 0;i < count;++i)
            {
                if(re%arra[i] == 0)
                    ++ans;
                while(re%arra[i]==0)
                {
                    re=re/arra[i];
                    flag1 = 2;
                }
            cout<<"hello "<<re<<endl;
                f=sod(re);
                cout<<"hi "<<f<<endl;
                if(arr[f] == 0 || f == 1)
                {
                    flag = 1;
                    break;
                }
                if(flag1 == 2)
                    break;
            }if(flag == 1)
            break;
            else
                flag1 = 0;
                temp = re;
                temp1 = re;
                copy = temp;
                copy1 = temp1;
            }
            if(ans%2==0)
            {
                ansa[u] = 1;
                ++u;
            }
               // cout<<"Seymour"<<endl;
            else
            {
                ansa[u] = 0;
                ++u;
            }
                //cout<<"Laurence"<<endl;
        }
        count = 0;
        ans = 0;
        sum = 0;
        flag = 0;
    }
    for(i = 0;i < u;++i)
        {
            cout<<"Case #"<<(i+1)<<": ";
            if(ansa[i] == 0)
            cout<<"Laurence"<<endl;
            else
                cout<<"Seymour"<<endl;
        }

}
long long int sod(long long int g)
{
    long long int y,sum = 0;
    while(g!=0)
    {
        y=g%10;
        g=g/10;
        sum=sum+y;
    }
    return sum;
}
