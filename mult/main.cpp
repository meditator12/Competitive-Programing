#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,lar,larg,i,arr[100000],arra[100000],tot = 0,total = 0;
    cin>>n;
    lar = 0;
    larg = 0;
    for(i =0 ;i < n;++i)
    {
        cin>>arr[i];
        cin>>arra[i];
        tot = tot + arr[i];
        total += arra[i];
        if(larg <= arra[i])
        {
            lar = arr[i];
        }
    }
    long long int x = total;
    total -= larg;
    if(tot < total)
        cout<<lar<<endl;
    else
    {
        sort(arr,arr+n);
        sort(arra,arra+n);
        for(i = 0;i < n;++i)
        {
        	if(arra[i] == 0)
        	continue;
        	else
        	{
        		x -= arra[i];
        		break;
        	}
        }

        cout<<tot-x<<endl;
    }
    return 0;
}
