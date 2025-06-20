#include<iostream>
using namespace std;
/*runtime poly = resolved in run time 
using function overriding
child class defines a function of parent class*/

class parent{
public:
    virtual void print(){
        cout<<"parent class"<<endl;
    }

    void show(){
        cout<<"idar dekh output me hu"<<endl;
    }
};

class child:public parent{
public:
     void print(){
        cout<<"parent class"<<endl;
    }

    void show(){
        cout<<"idar dekh output me hu"<<endl;
    }
    
};

int main(){
    parent *p;
    child c;
    p = &c;
    p->print();
    p->show();

    return 0;
}