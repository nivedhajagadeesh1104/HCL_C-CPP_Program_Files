#include<iostream>
using namespace std;
class Wallet{
    double balance;
public:
    Wallet(){
        balance=0;
    }
    void deposit(double amt){
        if(amt>0) balance+=amt;
    }
    void withdraw(double amt){
        if(amt>0 && amt<=balance) balance-=amt;
    }
    friend class WalletAuditor;
};
class WalletAuditor{
public:
    void report(const Wallet& w){
        cout<<w.balance<<endl;
    }
};
class Hacker{
public:
    void tryAccess(const Wallet& w){
        cout<<"Not allowed"<<endl;
    }
};
int main(){
    Wallet w;
    w.deposit(1000);
    w.withdraw(200);
    WalletAuditor a;
    a.report(w);
    Hacker h;
    h.tryAccess(w);
}