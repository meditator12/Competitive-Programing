#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int x=42;            //The integer
    string str;          //The string
    ostringstream temp;  //temp as in temporary
    temp<<x;
    str=temp.str();


}
