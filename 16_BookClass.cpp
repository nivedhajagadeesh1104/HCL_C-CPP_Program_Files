#include<iostream>
using namespace std;
class Book
{
    string isbn,title,author;
public:
    Book(){}
    void setDetails(string i,string t,string a)
    {
        isbn=i;
        title=t;
        author=a;
    }
    void updateTitle(const string &t)
    {
        title=t;
    }
    void print()
    {
        cout<<isbn<<" "<<title<<" "<<author<<endl;
    }
};
int main()
{
    Book b1;
    b1.setDetails("101","C++","Bjarne");
    b1.print();
    b1.updateTitle("Advanced C++");
    b1.print();
}