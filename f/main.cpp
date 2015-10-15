#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std ;
int main()
{
	int t,source ,e,destination,i,j,m,n,v,temp;
	bool visited[100];
	cin>> t;
	while(t--)
	{
		cin>>v>>e;
		queue<int>q ;
		int dist[v+1],adj[v+1][v+1] ;
		cin>>source>>destination ;
		for(j=0;j<e;j++)
		{
				scanf("%d%d",&m,&n);
				adj[m][n]=1;
		}
		if(source==destination)
		cout<<"0\n";
		else
		{
       for(i=0;i<v;i++)
	   visited[i]=0;
	   q.push(source);
	   visited[source]=true ;
	   dist[source]=0;
	   while(!q.empty())
	   {
	   	temp=q.front();
	   	q.pop();
	   	if(temp==destination)
	   	{
	   		cout<<dist[destination]<<"\n";
	   		break;
	   	}
	   	for(i=0;i<v;i++)
	   	{
	   		if(adj[temp][i]!=0)
	   		{
	   			if(visited[i]!=true)
	   			{
	   				q.push(i);
	   				visited[i]=true;
	   				dist[i]=dist[temp]+1;
	   			}
	   		}
	   	}
	   }
	     if(temp!=destination)
	     {
	   	  cout<<"-1\n";
	     }
       }
	   while(!q.empty())
	   q.pop();
    }
    return 0;
}
