#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    float m;
    float c = 0.5;
    scanf("%d%f",&n,&m);
    if(n % 5 == 0 && m > n && m >= (n+c))
    {
        m = m - n;
        m = m - 0.50;
        printf("%.2f\n",m);
    }
    else if(m <= n || (m < (n+c)))
    {
        printf("%.2f\n",m);
    }
    else if(n % 5 != 0)
    {
        printf("%.2f\n",m);
    }
    return 0;
}
