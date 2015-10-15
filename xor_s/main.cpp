#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int h;
    int i;
    for(i = 2;i <= 100;++i){
        cout<<i<<" "<<i+1<<" ";
        h = i^(i+1);
        cout<<h<<endl;
    }
    //cout<<h;
}
