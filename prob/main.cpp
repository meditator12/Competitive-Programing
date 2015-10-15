#include<iostream>
using namespace std;
int main()
{
    long long int n,m,mid;
    cin>>n>>m;
    if(n == 1&&m == 1)
        cout<<"1"<<endl;
    else
    {
    if(n % 2 == 0)
    {
        mid = n/2;
        if(m == mid)
            cout<<m+1<<endl;
        else if(m < mid)
            cout<<m+1<<endl;
        else if(m > mid)
            cout<<m-1<<endl;
    }
    else
    {
        mid = n/2 +1;
        if(m == mid)
            cout<<m-1<<endl;
        else if(m < mid)
            cout<<m+1<<endl;
        else if(m > mid)
            cout<<m-1<<endl;
    }
    }
}
