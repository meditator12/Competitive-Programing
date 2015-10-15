#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{

int t;
scanf("%d",&t);
while(t--)
{
int s,c,k;
unsigned long long count=0;
scanf("%d %d %d",&s,&c,&k);
int w=s;
if((k>1)&&(s==0))
printf("0 \n");
else if((k>s)&&(k>1))
printf("0 \n");
else
{
int y=w;
int g=c;
if(s>0)
{
count=count+3;
w--;
}
unsigned long long int q=1;
int h=0;
if(c>0)
{
y=w+1;
c--;
h=1;
}
else
y=w;

while((y>=k))
{
if(w>0)
w--;
q=q*2;
count=count+q;
if(c>0)
{
y=w+1;
c--;
}
else
y=w;


}



cout<<count<<endl;

}





}




}
