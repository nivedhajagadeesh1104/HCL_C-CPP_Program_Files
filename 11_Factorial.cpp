#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1)
    return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"Factorial using Recursion: "<<fact(n)<<endl;
    int fact=1;
    for(int i=n;i>=1;i--)
    fact*=i;
    cout<<"Factorial using For Loop: "<<fact<<endl;
}