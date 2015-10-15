#include<iostream>
#include<cstdio>
#include<cmath>
#include<string.h>
#define MOD 1000000007
using namespace std;
int main()
 {
     long long int len,t;
     cin>>t;
     while(t--)
     {
     string s;
     cin>>s;
 len = s.length();
 long long ones = 0, twos = 0, threes = 0, ans = 0, t_ones, t_twos, t_threes, sum = 0;
 for (int  i = 0; i < len; i++) {
  int rm = (s[i] - '0') % 3;
  switch (rm) {
   case 0:
    t_ones = (ones + ones) % MOD;
    t_twos = (twos + twos) % MOD;
    t_threes = (threes + threes) % MOD;
    sum = threes + 1;
    ones = t_ones, twos = t_twos, threes = t_threes;
    threes++;
    break;
   case 1:
    t_ones = (ones + threes) % MOD;
    t_twos = (twos + ones) % MOD;
    t_threes = (threes + twos) % MOD;
    sum = twos;
    ones = t_ones, twos = t_twos, threes = t_threes;
    ones++;
    break;
   case 2:
    t_ones = (ones + twos) % MOD;
    t_twos = (twos + threes) % MOD;
    t_threes = (threes + ones) % MOD;
    sum = ones;
    ones = t_ones, twos = t_twos, threes = t_threes;
    twos++;
    break;
  }
  if ((s[i] - '0') % 2 == 0)
   ans = (ans + sum) % MOD;
 }
 cout<<ans<<endl;
 ans = 0;
}
 }

