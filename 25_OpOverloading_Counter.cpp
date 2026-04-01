#include<iostream>
using namespace std;
class Counter{
    int value;
public:
    Counter(int v=0){
        value=v;
    }
    Counter& operator++(){
        value++;
        return *this;
    }
    Counter operator++(int){
        Counter temp=*this;
        value++;
        return temp;
    }
    int get(){
        return value;
    }
};
int main(){
    Counter c(5);
    int x=(c++).get();
    int y=(++c).get();
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<c.get()<<endl;
}