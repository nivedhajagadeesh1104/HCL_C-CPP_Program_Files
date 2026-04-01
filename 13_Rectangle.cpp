#include<iostream>
using namespace std;
class Rectangle
{
    int width;
    int height;
public:
    void setWidth(int w)
    {
        if(w<0) 
        width=0;
        else
        width=w;
    }
    void setHeight(int h)
    {
        if(h<0) 
        height=0;
        else 
        height=h;
    }
    int area()
    {
        return width*height;
    }
    void display()
    {
        cout<<width<<" "<<height<<" "<<area()<<endl;
    }
};
int main()
{
    Rectangle r;
    r.setWidth(10);
    r.setHeight(5);
    r.display();
    r.setWidth(-4);
    r.setHeight(3);
    r.display();
}