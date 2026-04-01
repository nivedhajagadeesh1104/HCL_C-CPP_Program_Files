#include<iostream>
using namespace std;
class Employee
{
protected:
    string name;
    int salary;
public:
    void setEmployee(string n,int s)
    {
        name=n;
        salary=s;
    }
};
class Manager:public Employee
{
    string department;
public:
    void setManager(string n,int s,string d)
    {
        setEmployee(n,s);
        department=d;
    }
    void display()
    {
        cout<<name<<" "<<salary<<" "<<department<<endl;
    }
};
int main()
{
    Manager m;
    m.setManager("John",50000,"IT");
    m.display();
}