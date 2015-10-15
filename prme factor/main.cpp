#include <iostream>
#include<cmath>
using namespace std;

void primeFactors(long long int number);
int main() {
    long long int t,number;
 cin>>t;
 while(t--)
 {
    cin>>number;
    primeFactors(number);
 }

 return 0;
}

void primeFactors(long long int number) {
    long long int coun = 0,p = 1,s,prod = 1,flag = 0,j,i,tes;
    if(number == 1)
        cout<<"1"<<endl;
    else
    {
        tes = sqrt(number);
 for(i=2; i <= tes ; i++){
    //cout<<i<<" "<<number<<endl;
  coun = 0;
  while(number%i == 0) {
  number = number/i;
  ++coun;
  flag = 1;
  }
  if(flag == 1){
    //cout<<i<<" "<<coun;
    for(j = 1;j <= coun+1;++j)
        p = p * i;
    //cout<<" "<<p;
  s = (p-1)/(i-1);
  //cout<<" "<<s<<endl;
  prod = prod*s;
  p = 1;
  }
  flag = 0;
 }
 if(number > 1)
 {
     p = (number*number)-1;
     s = p/(number-1);
     prod = prod * s;
 }
    cout<<prod<<endl;
    prod = 1;
}
}
