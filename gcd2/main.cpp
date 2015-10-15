#include<iostream>
#include<stdio.h>
typedef long long int ll;
ll gcd(ll,ll);
using namespace std;

int main() {
	int T,t=0,A,B,temp;
	char b[300];
	scanf("%d", &T);
	for(int i=0;i<T; ++i) {
		cin>>A;
		cin.ignore();
		gets(b);
		if(A==0) {
			puts(b);
			continue;
		}
		B=0;
		for(int j=0; b[j]!='\0'; ++j)
			B=((B*10)+(b[j]-'0'))%A;
		gcd(A,B);
	        printf("%lld\n", gcd(A,B));
	}

}
ll gcd(ll a, ll b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
