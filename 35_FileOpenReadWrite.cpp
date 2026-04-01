#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f;
    f.open("data.txt",ios::out);
    if(f.is_open()){
        f<<"Hello"<<endl;
        f.close();
    }
    f.open("data.txt",ios::in);
    string s;
    while(getline(f,s)){
        cout<<s<<endl;
    }
    f.close();
}