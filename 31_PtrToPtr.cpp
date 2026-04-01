#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* p=&a;
    int** pp=&p;
    **pp=10;
    cout<<a<<endl;
}