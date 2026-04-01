#include<iostream>
using namespace std;
class Device
{
protected:
    string brand;
public:
    void setDevice(string b)
    {
        brand=b;
    }
};
class Mobile:public Device
{
protected:
    int battery;
public:
    void setMobile(string b,int bat)
    {
        setDevice(b);
        battery=bat;
    }
};
class Smartphone:public Mobile
{
    int camera;
public:
    void setSmartphone(string b,int bat,int cam)
    {
        setMobile(b,bat);
        camera=cam;
    }
    void display()
    {
        cout<<brand<<" "<<battery<<" "<<camera<<endl;
    }
};
int main()
{
    Smartphone s;
    s.setSmartphone("Samsung",5000,64);
    s.display();
}