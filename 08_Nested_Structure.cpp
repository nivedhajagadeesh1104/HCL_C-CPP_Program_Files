#include<iostream>
#include<string>
using namespace std;
struct Customer{
    int CustId;
    string CustName;
};
struct Order{
    int OrderId;
    Customer cust;
};
int main(){
    struct Order o;
    cout<<"Enter Customer ID: ";
    cin>>o.cust.CustId;
    cin.ignore();
    cout<<"Enter Customer Name: ";
    getline(cin,o.cust.CustName);
    cout<<"Enter Order ID: ";
    cin>>o.OrderId;
    cout<<"Customer ID: "<<o.cust.CustId<<endl<<"Customer Name: "<<o.cust.CustName<<endl<<"Order ID: "<<o.OrderId;
}