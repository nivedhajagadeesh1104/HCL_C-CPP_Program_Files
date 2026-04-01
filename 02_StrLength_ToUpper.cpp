#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i=0,len=0;
    while(str[i]!='\0'){
        len++;
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
        i++;
    }
    cout<<"String Length: "<<len<<endl<<str;
}