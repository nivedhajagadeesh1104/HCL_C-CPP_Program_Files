#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream f("data.txt",ios::in);
    string s;
    int count=0;
    while(getline(f,s)) count++;
    f.close();
    f.open("data.txt",ios::app);
    f<<"Total Lines: "<<count<<endl;
    f.close();
}