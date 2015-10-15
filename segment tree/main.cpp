#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 100000
long long int segtree[100000];

// Array A[1...N]
long A[MAXSIZE];

// function to build segment tree
void build(int t,int i,int j){
	// base condition for leaf node
	if(i==j){
		segtree[t] = A[i];
		return;
	}
	// calculating indices of child nodes
	int left = t<<1,right=left|1,mid=(i+j)>>1;	// using bitwise operations is little faster
	// initializing left tree
	build(left,i,mid);
	// initializing right tree
	build(right,mid+1,j);
	// put sum of left and right child into parent node
	segtree[t] = segtree[left] + segtree[right];
}
void update(int t,int i,int j,int k,long x){
	// leaf node which holds value for index k
	if(i==j){
		if(i==k)
			segtree[t] = segtree[t] - x;      // reinitializing node with value x
		return;
	}
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	// if k is on left sub-tree
	if(k<=mid)
		update(left,i,mid,k,x);
	// if k is on right sub-tree
	else
		update(right,mid+1,j,k,x);
	// re-merge in case child nodes are modified
	segtree[t]= segtree[left] + segtree[right];
}
// function to update value at index k to x
/*void update_tree(int t, int a, int b, int i, int j, int value) {

	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;

  	if(a == b) { // Leaf node
    		segtree[t] += value;
    		return;
	}

	update_tree(t*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+t*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	segtree[t] = segtree[t*2] + segtree[t*2+1]; // Updating root with max value
}*/
// function for getting sum in range [ri,rj]
long query(int t,int i,int j,int ri,int rj){
	// if lies completely outside query range[ri,rj]
	if(j<ri || i>rj)
		return 0;
	// if lies completely inside
	if(ri<=i && rj>=j)
		return segtree[t];
	int left = t<<1,right=left|1,mid=(i+j)>>1;
	// if partially inside
	// note : here we are not merging left,right child values in the parent node
	return query(left,i,mid,ri,rj) + query(right,mid+1,j,ri,rj);
}

int main() {
	long long int N,Q,L,R,k,l,t;
	long long int x;
	scanf("%lld",&t);
	while(t--)
    {
	scanf("%lld%lld",&N,&Q);
	for(int i=1;i<=N;i++)
		scanf("%lld",&A[i]);
	// calling build function
	build(1,1,N);
	while(Q--){
			scanf("%lld",&L);
            if(L == 0)
            {
                scanf("%lld%lld",&l,&R);
                printf("%d\n",query(1,1,N,l,R));
            }
			else
            {
                scanf("%lld%lld",&l,&R);
                update(1,1,N,l,R);
            }
	}
    }
	return 0;
}
