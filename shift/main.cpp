#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
/*int main()
{
   string s,s1,s2;
   vector<string>v1;
   cin>>s>>s1;
   v1.push_back(s);
   v1.push_back(s1);
   int l = v1.size();
   s2 = v1[1];
   cout<<v1.size()<<endl;
   v1.erase(remove(v1.end(),v1.end(),s2));
   cout<<v1.size()<<endl;
   //cout<<v1[1]<<endl;
   //cout<<v1[1];
   v1.insert(v1.begin(),s2);
   cout<<v1.size()<<endl;
   cout<<v1[0]<<" "<<v1[1];
}


int main()
{
    int n,i,rotation,j,l;
    string s;
    char s1;
    vector<char>v1;
    cin>>s;
    l = s.length();
    for(i = 0;i < l;++i)
    {
        v1.push_back(s[i]);
    }
    cin>>rotation;
    for(i = 0;i < rotation;++i)
    {

        s1 = v1[v1.size()-1];
        v1.erase(remove(v1.end(),v1.end(),s1),v1.end()-1);
        v1.insert(v1.begin(),s1);
       // cout<<"vsd";
        for(vector<char>::iterator it = v1.begin();it != v1.end();++it)
            cout<<*it<<" ";
        cout<<endl;
    }
}*/
int main()
{
    string s;
    int l,i,j,tot;
    char temp,arr[1000];
    cin>>s;
    l = s.length();
    for(i = 0;i < l;++i)
        arr[i] = s[i];
    cin>>tot;
    for(i = 0;i < tot;++i)
    {
        temp = arr[l-1];
        for(j = l-1;j > 0;--j)
            arr[j] = arr[j-1];
        arr[0] = temp;
        for(j = 0;j < l;++j)
        {
        cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}
