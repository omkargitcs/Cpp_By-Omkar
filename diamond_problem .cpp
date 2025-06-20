/*diamond problem : the base class has multiple parent classes which has a a common ancestor class 
*/

#include<iostream>
using namespace std;

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

class grandchild:public child1,public child2{
public:
    grandchild(){
        cout<<"grandchildclass is here bro "<<endl;
    }
};

int main(){
   cout<<"omkar is king";
}

