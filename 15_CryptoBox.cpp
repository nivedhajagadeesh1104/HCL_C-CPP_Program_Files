#include<iostream>
using namespace std;
class CryptoBox
{
    int privateKey;
public:
    CryptoBox(int key)
    {
        privateKey=key;
    }
    friend void dumpForAudit(const CryptoBox &c);
};
void dumpForAudit(const CryptoBox &c)
{
    cout<<"Audit "<<c.privateKey<<endl;
}
void normalAccess(const CryptoBox &c)
{
}
int main()
{
    CryptoBox box(12345);
    dumpForAudit(box);
    normalAccess(box);
}