#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int main()
{
    string s;
    char ch[10] = {'A','B','C','D','E','A','B','C','D','E'};
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int adj[10][10] = {{0,1,0,0,1,1,0,0,0,0},{1,0,1,0,0,0,1,0,0,0},{0,1,0,1,0,0,0,1,0,0},{0,0,1,0,1,0,0,0,1,0},{1,0,0,1,0,0,0,0,0,1},{1,0,0,0,0,0,0,1,1,0},{0,1,0,0,0,0,0,0,1,1},{0,0,1,0,0,1,0,0,0,1},{0,0,0,1,0,1,1,0,0,0},{0,0,0,0,1,0,1,1,0,0}};
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.length();
        for(i = 0;i < 10;++i)
        {
            if(s[0] == ch[i])
            {
                temp = i;
                break;
            }
        }
        queue<int>q;
        q.push(temp);
        arr[i] = 1;
        while(!q.empty())
        {

        }

    }
}
