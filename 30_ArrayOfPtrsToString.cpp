#include<iostream>
using namespace std;
int main(){
    string s1="one",s2="two",s3="three";
    string* arr[3]={&s1,&s2,&s3};
    for(int i=0;i<3;i++){
        cout<<*arr[i]<<endl;
    }
}