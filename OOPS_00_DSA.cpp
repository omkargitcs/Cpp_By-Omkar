#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

/* why object oriented programming 
before oops there was procedure oriented programming 
conventional programming parody - use high level languages like c , cobol 
program was divided into tasks - group into functions 
global data - accessible to all functions 
drawback - difficult to track which function changes the data
if data str is changed,thn function also has to be modified

in object oriented programming 
main focus was on data then we *binded* the data to the fuunction using it 
program was didvided into object consisiting of data access by function of particular object only 
*/

/*what is class - fundamental unit of oops 
it is user defined datatype - class e.g = class fruit = { apple,mango,banana} we can 
define some data / properties/& method/function in class 
and the variable of this class is called objects 

so object are variable of type class 
e.g = class student = { name,roll_no }function like get_marks()
variable of datatype 'student' - object 
*/

/* constructor = used to initialize an object 
this is function which is called when an object is created 
same name as class name
type = 
default
parametarised
copy */

class fruit{ //by default the properties of class are private so if want to access in main make it public 
public:
    string name ;
    string color ;

};

class student {
    string student_name ;
    int  roll_no;
    

};

int main(){
    fruit apple; //objectv 
    apple.name="apple";
    apple.color="red";
    cout<<apple.name<<"-"<<apple.color<<endl;

    fruit *mango = new fruit();
    mango->name = "mango";
    mango->color = "yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;

}



