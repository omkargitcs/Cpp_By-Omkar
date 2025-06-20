/* constructor = used to initialize an object 
this is function which is called when an object is created 
same name as class name
type = 
default
parametarised
copy */

/* destructor : function is called when obj is deleted 
cannot pas any parameters
name - ~(class_name)*/

#include<iostream>
using namespace std;
class rectangle{
public:
    int l;
    int b;

    rectangle(){ //default constuctor
        l=0;
        b=0;
    }

    rectangle(int x,int y){ 
          //parametric constuctor
        l=x;
        b=y;
    }

    //copy constuctor - initialize an obj by another existing object 
    rectangle(rectangle& r){ 
        l=r.l;
        b=r.b;

    }

    ~rectangle(){ //destructor
        cout<<"destructor is called"<<endl;
    }
};


int main(){
    rectangle* r1 = new rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1 ; //can only use on pointer variable 


    rectangle r2 (3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}
