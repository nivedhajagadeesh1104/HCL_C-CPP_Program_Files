#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=0;
    while(str[len]!='\0')
    len++;
    int f=1;
    for(int i=0;i<=len/2;i++){
        if(str[i]!=str[len-i-1]){
            f=0;
            break;
        }
    }
    if(f)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
}