#include<vector>
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{

    int l,count = 0,i,o=0,k=0,e,q;
    string ans;
    string name;
 //   std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  name = name+' ';
  std::cout << "Hello, " << name << "!\n";
    l = name.length();
  //  cout<<l;
    string s[(l/2)+1],s1[(l/2)+1],h;
    for(i = 0;i < l;++i)
    {
        //cout<<s[i]<<" "<<i<<endl;
       // cout<<name[i]<<" "<<i<<endl;

        if(name[i] == ' ')
        {
            ++count;
            if(count%2)
            {
                s1[o] = h;
                ++o;
                h="";
            }
            else
            {
                s[k] = h;
                ++k;
                h="";
            }
        }
        else
        {
            h=h+(char)(tolower(name[i]));
        }
    }
    int cou,pos_min,j;
    string temp="";
    cin>>cou;
    for(i = 0;i < cou/2;++i)
    {
        pos_min = i;
        for(j = i;j < o;++j)
        {
            if(s1[j] < s1[i])
            {
                pos_min = j;
                cout<<pos_min<<endl;
            }
        }
        cout<<s1[pos_min]<<endl;
        if(pos_min != i)
        {
            temp = s1[i];
            s1[i] = s1[pos_min];
            s1[pos_min] = temp;
        }
    }
    for(i = 0;i < cou/2;++i)
    {
        pos_min = i;
        for(j = i+1;j < k;++j)
        {
            if(s[j] < s[i])
                pos_min = j;
        }
        //cout<<s1[pos_min]<<endl;
        if(pos_min != i)
        {
            temp = s[i];
            s[i] = s[pos_min];
            s[pos_min] = temp;
        }
    }
    for(i = 1;i <= o+l;++i)
        if(i%2!=0)
        {
            ans[i] = s1[q];
            ++q;
            s1[q] = ' ';
            ++q;
        }

    else
    {
        ans[i] = s[e];
        ++e;
        s[e] = ' ';
            ++e;
    }
    for(i = 1;i <= l;++i)
        cout<<ans[i]
        cout<<endl;
}
