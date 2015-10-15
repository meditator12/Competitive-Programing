#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,n,k,i,temp;
    scanf("%d%d%d",&a,&n,&k);
    for(i=0;i<k;i++)
    {
        temp=a/(n+1);
        printf("%d ",a%(n+1));
        a=temp;
    }
}
