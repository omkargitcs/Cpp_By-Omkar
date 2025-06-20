/* ENCAPSULATION : binding of method and variables together into single unit - {CLASS}
how? - data is only accesible from the class methods
also leads to a data abstraction/hiding 
class = abstaract data type (ADT) 

abstraction : enables us to display only essential information while hiding implemantaion details 
e.g = pow(3,4)*/

/*Inheritance : a class inherits properties of another class 
from A - parent class/super class 
to B  - child class/sub class

uses of inheritance : now suppose there is car,truck ,scooter now in class vehicles there is tyre which has 
object of tire and capacity now 1st case : we can copy tire and capacity individually or directly inherit the property from vehicle parent class to car,truck 
child class 
*/
#include<iostream>
using namespace std;

class abc{
    int x;

    public :
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};

int main(){
    abc obj1;
    obj1.set(345);
    cout<<obj1.get()<<endl;
}
