#include<iostream>
#include<cmath>
using namespace std;
class MathOps{
public:
    static int pow(int a,int b){
        int res=1;
        for(int i=0;i<b;i++) 
        res*=a;
        return res;
    }
    static double pow(double a,double b){
        return std::pow(a,b);
    }
};
class Function{
public:
    virtual double evaluate(double x){
        return x;
    }
};
class Square:public Function{
public:
    double evaluate(double x){
        return x*x;
    }
};
int main(){
    cout<<MathOps::pow(2,3)<<endl;
    cout<<MathOps::pow(2.5,2.0)<<endl;
    Function* f=new Square();
    cout<<f->evaluate(3)<<endl;
}