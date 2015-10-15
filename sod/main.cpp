#include<iostream>
#include<algorithm>
using namespace std;
int sod(int n)
{
    int rem,sum = 0;
    while(n!=0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    if(sum < 10)
        return sum;
    else
        sod(sum);
}
int main()
{
    int t,n,i,arr[250000],ans,lar = 0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
            cin>>arr[i];
        lar = 0;
        for(i = 0;i < n;++i)
        {
            ans = sod(arr[i]);
            if(ans >= lar)
                lar = ans;
        }
        ans = lar;
        if(ans == 0)
            cout<<"red"<<endl;
        else if(ans == 1)
            cout<<"blue"<<endl;
        else if(ans == 2)
            cout<<"pink"<<endl;
        else if(ans == 3)
            cout<<"white"<<endl;
        else if(ans == 4)
            cout<<"black"<<endl;
        else if(ans == 5)
            cout<<"violet"<<endl;
        else if(ans == 6)
            cout<<"cyan"<<endl;
        else if(ans == 7)
            cout<<"yellow"<<endl;
        else if(ans == 8)
            cout<<"green"<<endl;
        else if(ans == 9)
            cout<<"brown"<<endl;
    }
    return 0;
}
