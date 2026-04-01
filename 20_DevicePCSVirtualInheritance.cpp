#include<iostream>
using namespace std;
class Device
{
public:
    string brand;
};
class Phone:virtual public Device
{
public:
    int battery;
};
class Camera:virtual public Device
{
public:
    int megapixel;
};
class SmartPhone:public Phone,public Camera
{
public:
    void setData(string b,int bat,int mp)
    {
        brand=b;
        battery=bat;
        megapixel=mp;
    }
    void display()
    {
        cout<<brand<<" "<<battery<<" "<<megapixel<<endl;
    }
};
int main()
{
    SmartPhone s;
    s.setData("Apple",4000,48);
    s.display();
}