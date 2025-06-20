#include<iostream>
using namespace std;//multiple child class inherit one parent class

/*hybrid inheritance : combination of more than one inheritance type where there hierarchical and multiplevel inherit at same rtime */

class parent1{
public:
    parent1(){
        cout<<"parent 1 is here bro class is here"<<endl;
    }

};



class child1:public parent1{
public:
    child(){
        cout<<"child class"<<endl;
    }

};
class child2:public parent1{
public:
    child(){
        cout<<"child class"<<endl;
    }

};

int main(){
    child1 c;
    child2 g;
    return 0;
}
