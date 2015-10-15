#include<iostream>

using namespace std;

class DIJKSTRA
{
    int n; //number of nodes
    int a[10][10]; //cost adjacency matrix
    int p[10]; //path
    int d[10]; //distance
    public:
        void read(); //to read the cost adjacency matrix
        void print(); //to print result - source, destination and distance
        void solution(int source);

};

void DIJKSTRA::solution(int source)
{
    int i, j, u, v, min;
    int s[10]; //indicates the nodes visited so far

    for(i=1;i<=n;i++)
    {
        d[i] = a[source][i];  //initialize d to distance b/w source and vertices
        s[i] = 0; //no node is visited initially
        p[i] = source; //path from source
    }
    s[source] = 1; //source is visited first

	/* find u and d[u] such that d[u] is minimum */

    for(i=1;i<n;i++)
    {
        u = -1;
        min = 999;
        for(j=1;j<=n;j++)
        {
            if(s[j]==0)
            {
                if(d[j]<min)
                {
                    min = d[j];
                    u = j;
                }
            }
        }

        if(u==-1) return;
        s[u] = 1; //add u to visited vertices

         /* find d[v] and p[v] for every v in v-s */

        for(v=1;v<=n;v++)
        {
            if((s[v]==0) && (d[u]+a[u][v] < d[v]))
            {
                d[v] = d[u]+a[u][v];
                p[v] = u;
            }
        }
    }

}

void DIJKSTRA::read()
{
    cout<<"Enter n\n";
    cin>>n;
    cout<<"Enter the cost adjacency matrix\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

}

void DIJKSTRA::print()
{
    int source;
    cout<<"Enter source\n";
    cin>>source;
    solution(source);
    cout<<"solution to the problem is\n";
    cout<<" VERTEX \t"<<"DESTINATION \t"<<"DISTANCE\t"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<source<<"\t"<<i<<"\t"<<d[i]<<endl;
    }
}

int main()
{
    DIJKSTRA d;
    d.read();
    d.print();
}
