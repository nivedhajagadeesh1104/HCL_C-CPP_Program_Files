#include<iostream>
using namespace std;
int main(){
    int choice;
    do{
        cout<<"Enter Choice: "<<endl<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        cin>>choice;
        int a,b;
        switch(choice){
            case 1:
            cout<<"Enter 2 numbers: \n";
            cin>>a>>b;
            cout<<a+b<<endl;
            break;
            case 2:
            cout<<"Enter 2 numbers: \n";
            cin>>a>>b;
            cout<<a-b<<endl;
            break;
            case 3:
            cout<<"Enter 2 numbers: \n";
            cin>>a>>b;
            cout<<a*b<<endl;
            break;
            case 4:
            cout<<"Enter 2 numbers: \n";
            cin>>a>>b;
            cout<<a/b<<endl;
            break;
            case 5:
            cout<<"Exiting";
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }while(choice!=5);
}