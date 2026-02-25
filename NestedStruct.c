#include<stdio.h>
struct Customer{
    int custid;
    char custname[50];
};
struct Item{
    int itemid;
    char itemname[100];
    float price;
};
struct Order{
    int orderid;
    struct Customer cust;
    struct Item it;
    int quantity;
};
void printdetails(struct Order o){
    printf("%d\n",o.orderid);
    printf("%d-%s\n",o.cust.custid,o.cust.custname);
    printf("%d-%s-%.2f\n",o.it.itemid,o.it.itemname,o.it.price);
    printf("%d",o.quantity);
}
int main(){
    struct Order order={104,{187,"Nivedha"},{34,"Notebook",192.9},10};
    printdetails(order);
}