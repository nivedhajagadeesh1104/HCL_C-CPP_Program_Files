#include<iostream>
#include<cmath>
using namespace std;
class Point{
public:
    double x,y;
    Point(double a=0,double b=0){
        x=a;
        y=b;
    }
};
double distance(double x1,double y1,double x2,double y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
double distance(Point p1,Point p2){
    return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}
double distance(Point p){
    return sqrt(p.x*p.x+p.y*p.y);
}
int main(){
    Point p1(1,2),p2(4,6);
    cout<<distance(1,2,4,6)<<endl;
    cout<<distance(p1,p2)<<endl;
    cout<<distance(p1)<<endl;
}