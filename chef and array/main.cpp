#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 10000000
long long int segtree[10000000];
long long int A[MAXSIZE];
long long int maxi(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
void build(int t,int i,int j){
	if(i==j){
		segtree[t] = A[i];
		return;
	}
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	build(left,i,mid);
	build(right,mid+1,j);
	segtree[t] = maxi(segtree[left],segtree[right]);
}
/*void update(int t,int i,int j,int k,int x){
	if(i==j){
		if(i==k)
			segtree[t] = segtree[t] - x;
		return;
	}
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	if(k<=mid)
		update(left,i,mid,k,x);
	else
		update(right,mid+1,j,k,x);
	segtree[t]= segtree[left] + segtree[right];
}
*/
long long int query(int t,int i,int j,int ri,int rj){
	if(j<ri || i>rj)
		return 0;
	if(ri<=i && rj>=j)
		return segtree[t];
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	return maxi(query(left,i,mid,ri,rj),query(right,mid+1,j,ri,rj));
}

int main() {
	int N,Q,l,r;
	long long int s = 0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%lld",&A[i]);
	build(1,0,N-1);
	scanf("%d%d%d",&Q,&l,&r);
	for(int i = 1;i <= Q;++i)
	{
           // s = s + query(1,0,N-1,l,r);
           if(l <= r)
            s = s + query(1,0,N-1,l,r);
            else
            s = s + query(1,0,N-1,r,l);
            l = (l + 7)%(N-1);
            r = (r + 11)%N;
            //printf("%lld\n",s);
	}
	printf("%lld\n",s);
	s = 0;
	return 0;
}
