#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;


class Student{
public:
    int arr[1000];
public:
void Input()
{
    int i;
    for(i = 0;i < 5;++i)
        cin>>arr[i];

}

int CalculateTotalScore()
    {
    int i,s = 0;
    for(i = 0;i < 5;++i)
        s = s+arr[i];
    cout<<endl;
   // cout<<s<<endl;
    return s;
}
void print()
{
    int i;
    for(i = 0;i < 5;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}
};
int main() {
   int n;
     cin>>n;
     Student s[n];
     for(int i=0;i<n;i++)
      s[i].Input();
    for(int i = 0;i < n;++i)
        s[i].print();
     int count=0;
     int krish_score=s[0].CalculateTotalScore();
     for(int i=1;i<n;i++)
    {
      int total=s[i].CalculateTotalScore();
      if(total>krish_score)
        count++;
    }
     cout<<count;
    return 0;
}
