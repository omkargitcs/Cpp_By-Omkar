#include<iostream>
using namespace std;//inheritng one or many parent clas to one child class 

class parent1{
public:
    parent1(){
        cout<<"parent 1 is here bro class is here"<<endl;
    }

};

class parent2{
public:
    parent2(){
        cout<<"parent 2 is here you  dumbass class is here"<<endl;
    }

};

class child:public parent1,public parent2{
public:
    child(){
        cout<<"child class"<<endl;
    }

};

int main(){
    child c;
    return 0;
}



