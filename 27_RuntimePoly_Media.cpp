#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class Media{
public:
    virtual void play(){
        cout<<"Media"<<endl;
    }
    virtual ~Media(){}
};
class Audio:public Media{
public:
    void play(){
        cout<<"Audio"<<endl;
    }
};
class Video:public Media{
public:
    void play(){
        cout<<"Video"<<endl;
    }
};
int main(){
    vector<unique_ptr<Media>> v;
    v.push_back(make_unique<Audio>());
    v.push_back(make_unique<Video>());
    for(int i=0;i<v.size();i++){
        v[i]->play();
    }
}