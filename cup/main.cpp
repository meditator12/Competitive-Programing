#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int ar[20],i,sum,sum1;
    for(i = 0;i < 10;++i)
        cin>>ar[i];
    sort(ar,ar+10);
    reverse(ar,ar+10);
    sum = ar[0]+ar[2]+ar[4];
    sum1 = ar[1]+ar[3]+ar[5];
    if(sum >= sum1)
        cout<<sum<<endl;
    else
        cout<<sum1<<endl;
}
