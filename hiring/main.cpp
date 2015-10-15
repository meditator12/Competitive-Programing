#include<iostream>
long long f(long long);
long long getXor(long long,long long);

using namespace std;
int main()
{
    long long t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<getXor(n,m)<<endl;
    }
}

long long f(long long a) {
     long long res[] = {a,1,a+1,0};
     return res[a%4];
}

long long getXor(long long a, long long b) {
     return f(b)^f(a-1);
}
