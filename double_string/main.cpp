#include<iostream>
using namespace std;
int main()
{
    long long int t,l;
    cin>>t;
    while(t--)
    {
        cin>>l;
        if(l%2==0)
            cout<<l<<endl;
        else if(l == 0)
            cout<<"0"<<endl;
        else if(l%2 != 0)
            cout<<l-1<<endl;
    }
}
