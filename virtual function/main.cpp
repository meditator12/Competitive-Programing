#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Rectangle{
public:
    int width,height;
public:
    void Display(){
    cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea:public Rectangle
{
public:
    void Input(){
    int w,h;
    cin>>w>>h;
    width = w;
    height = h;
    }
    void Display(){
        cout<<width*height;
    }
};






int main() {
      RectangleArea r_area;
      r_area.Input();
        Rectangle *r;
        r=&r_area;
        r->Display();
        r_area.Display();
    return 0;
}
