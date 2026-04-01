#include<iostream>
#include<fstream>
using namespace std;
class Employee{
public:
    int id;
    char name[20];
};
int main(){
    Employee e;
    fstream f("emp.dat",ios::out|ios::binary);
    cin>>e.id>>e.name;
    f.write((char*)&e,sizeof(e));
    f.close();
    f.open("emp.dat",ios::in|ios::binary);
    f.read((char*)&e,sizeof(e));
    cout<<e.id<<" "<<e.name<<endl;
    f.close();
}