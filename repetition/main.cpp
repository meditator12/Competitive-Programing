#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<min(min(2,3),1);
    int t,n,i,j,arr[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i = 0;i < n;++i)
        {
            for(j = 0;j < 3;++j)
                cin>>arr[i][j];
        }
    }

}
