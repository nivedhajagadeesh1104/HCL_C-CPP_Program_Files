#include<iostream>
#include<vector>
using namespace std;
void printDiag(int x){
    cout<<x<<endl;
}
void printDiag(double x){
    cout<<x<<endl;
}
void printDiag(string s){
    cout<<s<<endl;
}
void printDiag(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,2,3};
    printDiag(10);
    printDiag(5.5);
    printDiag("hello");
    printDiag(v);
}