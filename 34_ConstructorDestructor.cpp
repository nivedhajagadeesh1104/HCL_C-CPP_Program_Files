#include<iostream>
using namespace std;
class Test{
public:
    Test(){
        cout<<"Constructed"<<endl;
    }
    ~Test(){
        cout<<"Destroyed"<<endl;
    }
};
int main(){
    Test* t=new Test();
    delete t;
}