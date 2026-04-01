#include<iostream>
using namespace std;
class Rectangle{
    double width,height;
public:
    void setWidth(double w){
        if(w<=0) 
        throw w;
        width=w;
    }
    void setHeight(double h){
        if(h<=0) 
        throw h;
        height=h;
    }
    double area(){
        return width*height;
    }
};
int main(){
    Rectangle r;
    try{
        r.setWidth(5);
        r.setHeight(-2);
    }
    catch(double){
        cout<<"Invalid"<<endl;
    }
}