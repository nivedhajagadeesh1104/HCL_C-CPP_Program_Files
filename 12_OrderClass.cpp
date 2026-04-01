#include<iostream>
#include<vector>
using namespace std;
class Order
{
    vector<pair<int,int>> items;

public:
    void addLineItem(int id,int qty)
    {
        items.push_back({id,qty});
    }
    int totalItems()
    {
        int total=0;
        for(auto item:items)
            total+=item.second;
        return total;
    }
    void display()
    {
        for(auto item:items)
            cout<<item.first<<" "<<item.second<<endl;
        cout<<"Total "<<totalItems()<<endl;
    }
};
int main()
{
    Order order;
    order.addLineItem(101,2);
    order.addLineItem(102,5);
    order.addLineItem(103,3);
    order.display();
}