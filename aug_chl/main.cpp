#include<iostream>
#include<math.h>
typedef long long int ll;
ll isPalindrome(ll number, unsigned char base);
using namespace std;
int main()
{
    ll t,b,h,count = 0,i;
    cin>>t;
    while(t--)
    {
        cin>>b>>h;
        for(i = 1;i <= pow(2,60);++i)
        {
            if(isPalindrome(i,b) == isPalindrome(i,h))
                cout<<i<<" "<<endl;
            ++count;
            if(count == 1000)
                break;
        }
        count = 0;
    }
}
ll isPalindrome(ll number, unsigned char base)
{
 unsigned long long forward = number;
 unsigned long long reversed = 0;
 unsigned char digit;

 while (number > 0)
 {
  digit = number % base;
  reversed = reversed * base + digit;
  number = number / base;
 }
 return (forward == reversed);
}
