#include<iostream>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s[0] == 'B' || s[0] == 'b')
            cout<<"BattleShip"<<endl;
        else if(s[0] == 'C'||s[0] == 'c')
            cout<<"Cruiser"<<endl;
        else if(s[0] == 'd'||s[0] == 'D')
            cout<<"Destroyer"<<endl;
        else if(s[0] == 'F'||s[0] == 'f')
            cout<<"Frigate"<<endl;
    }
}
