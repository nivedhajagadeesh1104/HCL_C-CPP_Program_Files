#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=0;
    for(int i=0;i<str[i]!='\0';i++){
        len++;
    }
    if(len>8)
    cout<<"Length greater than 8";
    else
    cout<<"Length less than 8";
}