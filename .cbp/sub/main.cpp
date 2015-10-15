#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    string s;
    long long int l,p;
    cin>>s;
    l = s.length();
    p = (l*(l+1))/2;
    cout<<p<<endl;
}
