/*Inheritance : a class inherits properties of another class 
from A - parent class/super class 
to B  - child class/sub class

uses of inheritance : now suppose there is car,truck ,scooter now in class vehicles there is tyre which has 
object of tire and capacity now 1st case : we can copy tire and capacity individually or directly inherit the property from vehicle parent class to car,truck 
child class 
*/

/*types of inheritance 
public : data & functions they can be accessed from anyware
protected: accesible in own class ,parent class and derived class 
private - accessible to own class */

/* single inheritance : when class b directly inherit the property of class a 
*/
#include<iostream>
using namespace std;



class parent{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class child1 : public parent {
    //x will remain public 
    //y will remain protected 
    //z is not accessible 
};

class child2 : private parent{
     //x will be private 
    //y will be private 
    //z is not accessible
    
}

class child3:protected parent{
    //x is proteted 
    //y is protected
    //z is inaccessible 

}


int main(){
    parent.p;
    p.x;
}
