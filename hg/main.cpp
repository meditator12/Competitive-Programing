#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int arr[100000],i,l,n,c = 0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        l = s.length();
        for(i = 0;i < l;++i)
            arr[i] = s[i];
        sort(arr,arr+l);
        for(i = 0;i < l;++i)
        {
            ++c;
            if(arr[i] == arr[i+1])
            {
                i = i + 1;
            }
        }
        cout<<c<<endl;
        c = 0;
    }
    return 0;
}
