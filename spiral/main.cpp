#include<iostream>
using namespace std;
int main()
{
    long long int m,n,a[100][100],i,k = 0,l = 0,c = 1,j;
    cin>>m>>n;
    for(i = 0;i < m;++i)
    {
        for(j = 0;j < n;++j)
        {
            a[i][j] = c;
            ++c;
        }
    }
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            cout<<a[k][i]<<" ";
        }
        k++;
        for (i = k; i < m; ++i)
        {
            cout<<a[i][n-1]<<" ";
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                cout<<a[m-1][i]<<" ";
            }
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                cout<<a[i][l]<<" ";
            }
            l++;
        }
    }
    return 0;
}
