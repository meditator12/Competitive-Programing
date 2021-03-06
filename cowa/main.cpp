#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 10000000
long long int segtree[10000000];
long A[MAXSIZE];
void build(int t,int i,int j){
	if(i==j){
		segtree[t] = A[i];
		return;
	}
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	build(left,i,mid);
	build(right,mid+1,j);
	segtree[t] = segtree[left] + segtree[right];
}
void update(int t,int i,int j,int k,int x){
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

int query(int t,int i,int j,int ri,int rj){
	if(j<ri || i>rj)
		return 0;
	if(ri<=i && rj>=j)
		return segtree[t];
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	return query(left,i,mid,ri,rj) + query(right,mid+1,j,ri,rj);
}

int main() {
	int N,Q,L,R,l,t;
	scanf("%d",&t);
	while(t--)
    {
	scanf("%d%d",&N,&Q);
	for(int i=1;i<=N;i++)
		scanf("%ld",&A[i]);
	build(1,1,N);
	while(Q--){
			scanf("%d",&L);
            if(L == 0)
            {
                scanf("%d%d",&l,&R);
                printf("%d\n",query(1,1,N,l,R));
            }
			else
            {
                scanf("%d%d",&l,&R);
                update(1,1,N,l,R);
            }
	}
    }
	return 0;
}
