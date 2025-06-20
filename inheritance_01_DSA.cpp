#include<iostream>
using namespace std;
//single level inheritance

class parent{

public:
    parent(){
        cout<<"parent class is here"<<endl;
    }

};

class child:public parent{
public:
    child(){
        cout<<"child class"<<endl;
    }

};

int main(){
    child c;
    return 0;
}