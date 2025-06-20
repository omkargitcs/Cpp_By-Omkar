/*scope of variables part of the program from where a variable is accessible 
local variable - var which declared inside function or block
global - these are that exist throughout the program and can be used in any program
scope resolution - when local and global has same var name; and when you want to access the global variable inside a 
local scope of block use :: - scope resolution operator

Formal parameters - para which are decalared outside int main()
actual parameters - para which are decalred inside int main() while calling the parameters 

pass by value - when parameters values are copied to other variables copies/new var are created 

pass by reference - actual variable are passed using ampersand operator
int p =9;
int &q=p;

default parameter value - value in the function declaration automatically assigned 
by the compiler if the calling fucntion does not pass any value to that argument

int add(int a,int b=0,int c=7){
add(a)// no b and c still answer will be there as we set it default

}

*/


#include<iostream>
using namespace std;
void change(int &i,int &z){
    z=100;
    i=9;
}
int main(){
    //int p=98;
    //int &r=p;
    //r++;
    //cout<<p<<endl;
    int a=67;
    int b=87;
    change(a,b);
    cout<<a<<endl;
    cout<<b;

    
}





