#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int main(){
    int choice,a,b;
    cin>>choice>>a>>b;
    int (*op)(int,int);
    if(choice==1) 
    op=add;
    else if(choice==2) 
    op=sub;
    else if(choice==3) 
    op=mul;
    else 
    op=divi;
    cout<<op(a,b)<<endl;
}