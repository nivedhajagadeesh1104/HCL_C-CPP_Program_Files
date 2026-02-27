#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int m1,m2,m3;
    cout<<"Enter 3 subject marks: ";
    cin>>m1>>m2>>m3;
    ofstream file("marks.txt");
    file<<m1<<" "<<m2 <<" "<<m3;
    file.close();
    cout<<"Marks saved to file.\n";
    ifstream readFile("marks.txt");
    int a,b,c;
    readFile>>a>>b>>c;
    readFile.close();
    float avg=(a+b+c)/3.0;
    cout<<"Average marks= "<<avg;
    ofstream writeAvg("marks.txt", ios::app);
    writeAvg<<"\nAverage: \n"<<avg;
    writeAvg.close();
}