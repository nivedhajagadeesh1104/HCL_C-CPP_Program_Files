#include<iostream>
#include<string>
using namespace std;
typedef struct{
    int rno;
    string name;
}Student;
int main(){
    Student s;
    cout<<"Enter Roll no.: ";
    cin>>s.rno;
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin,s.name);
    cout<<"Roll Number: "<<s.rno<<endl<<"Name: "<<s.name<<endl;
}