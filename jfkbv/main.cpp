#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,g;
    for(i = 0;i <= 10;++i)
    {
        g = i^(i+1);
        cout<<i<<" "<<i+1<<" \t"<<g<<endl;
    }
}
