#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    l1.push_back(1);
    l1.push_back(2);
    sort(l1.begin(),l1.end());
}
