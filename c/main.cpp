#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    long long int t,n,q;
    cin>>t;
    while(t--){
    cin>>n;
    if(n == 1)
        cout<<"2"<<endl;

    else if(n %2 == 0)
        cout<<"-1"<<endl;
    else
    {
        int h = floor(log2 (n+1));
        int k = ceil(log2(n+1));
        if(h == k)
        {
            q = pow(2,h-1);
            cout<<q-1<<endl;
        }
        else
            {
                cout<<"-1"<<endl;

            }
    }
    }
}
