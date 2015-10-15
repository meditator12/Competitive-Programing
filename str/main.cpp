#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        signed long long int n,x;
        scanf("%lld %lld",&n,&x);
        int i;
        signed long long int A[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&A[i]);
        }
        signed long long int y;
        int j=0;
        signed long long int diff=0;
        int g=0;
        unsigned long long int sum=0;
        for(i=0;i<n;i++)
        {

            sum=sum+A[i];
            if(sum==x)
            {
                cout<<"YES"<<endl;
                g=1;
                break;
            }
            else
            {
            while(sum>x)
            {
                sum=sum-A[j];
                j++;
            }
            if(sum==x)
            {
                cout<<"YES"<<endl;
                g=1;
                break;
            }
            }
        }



        if(g==0)
            cout<<"NO"<<endl;



    }




}
