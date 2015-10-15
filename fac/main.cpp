#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,i,j,arr[101][101],arra[101][101],lar = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i = 1;i <= n;++i)
        {
            for(j = 1;j <= i;++j)
                scanf("%d",&arr[i][j]);
        }
        for(i = 1;i <= n;++i)
        {
            for(j = 1;j <= n;++j)
                arra[i][j] = 0;
        }
        arra[1][1] = arr[1][1];
        for(i = 2;i <= n;++i)
        {
            for(j = 1;j <= i;++j)
            {
                if(j == 1)
                {
                    arra[i][j] = arra[i-1][j] + arr[i][j];
                }
                else
                {
                    if(arra[i-1][j] >= arra[i-1][j-1])
                        arra[i][j] = arra[i-1][j] + arr[i][j];
                    else
                        arra[i][j] = arra[i-1][j-1] + arr[i][j];
                }
            }
        }
        lar = 0;
        for(i = 1;i <= n;++i)
        {
            if(arra[n][i] >= lar)
                lar = arra[n][i];
        }
        printf("%d\n",lar);
        lar = 0;
    }
    return 0;
}
