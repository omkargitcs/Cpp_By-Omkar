#include<iostream>
using namespace std;
//multilevel inheritance
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

class grandchild:public child{
public:
    grandchild(){
        cout<<"grandchildclass"<<endl;
    }
};

int main(){
    child c;
    grandchild gc;
    return 0;
}
