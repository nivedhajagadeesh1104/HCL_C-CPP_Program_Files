#include<iostream>
using namespace std;
class Teacher
{
public:
    virtual void work()
    {
        cout<<"Teaching"<<endl;
    }
};
class Researcher
{
public:
    virtual void work()
    {
        cout<<"Researching"<<endl;
    }
};
class Professor:public Teacher,public Researcher
{
public:
    void work()
    {
        cout<<"Teaching and Research"<<endl;
    }
};
int main()
{
    Professor p;
    p.work();
}